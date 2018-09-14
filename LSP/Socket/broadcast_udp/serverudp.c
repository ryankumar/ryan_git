#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <ctype.h>
int main(){
  int udpSocket, nBytes;
  char buffer[1024];
  char buff[100];
  struct sockaddr_in serverAddr, clientAddr;
  struct sockaddr_storage serverStorage;
  socklen_t addr_size, client_addr_size;
  int i;

  /*Create UDP socket*/
  udpSocket = socket(AF_INET, SOCK_DGRAM, 0);

  /*Configure settings in address struct*/
  serverAddr.sin_family = AF_INET;
  serverAddr.sin_port = htons(7891);
  serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);  

  /*Bind socket with address struct*/
  bind(udpSocket, (struct sockaddr *) &serverAddr, sizeof(serverAddr));

  /*Initialize size variable to be used later on*/
  addr_size = sizeof serverStorage;

  while(1){
    /* Try to receive any incoming UDP datagram. Address and port of 
      requesting client will be stored on serverStorage variable */
    nBytes = recvfrom(udpSocket,buffer,1024,0,(struct sockaddr *)&serverStorage, &addr_size);

    /*Convert message received to uppercase*/
   /* for(i=0;i<nBytes-1;i++)
      buffer[i] = toupper(buffer[i]);
   */	
	printf("%s",buffer);
	bzero(buffer,1024);
	fgets(buff,100,stdin);
    /*Send uppercase message back to client, using serverStorage as the address*/
//	scanf("%s",buffer);
     sendto(udpSocket,buffer,strlen(buffer),0,(struct sockaddr *)&serverStorage,addr_size);
	bzero(buff,100);
  }

  return 0;
}
