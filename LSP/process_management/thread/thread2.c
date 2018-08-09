/* This program creates a single extra thread, shows that it is sharing variables with the original thread,
and gets the new thread to return a result to the original thread. Multithreaded programs don’t get much
simpler than this! Here is thread1.c :
 
 here after blocking of thread1 thread2 is not started ,it is in sleep mode for 3sec and the process is not working simultaneously...hence to run simultaneously both thread refere thread3.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

void *thread_function(void *arg);

char message[] = "Hello World";

int main() {
    int res;
    pthread_t a_thread;
    void *thread_result;
    res = pthread_create(&a_thread, NULL, thread_function, (void *)message);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
  
    printf("Waiting for thread to finish...\n");

    res = pthread_join(a_thread, &thread_result);
    if (res != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }
    printf("Thread joined, it returned %s\n", (char *)thread_result);
    printf("Message is now %s\n", message);
    exit(EXIT_SUCCESS);
}

void *thread_function(void *arg) {
    printf("thread_function is running. Argument was %s\n", (char *)arg);
    sleep(3);
    strcpy(message, "Bye!");
//  while(1);
    pthread_exit("Thank you for the CPU time");
}
