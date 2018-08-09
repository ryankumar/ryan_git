/*Make the changes that follow so that SIGINT is intercepted by sigaction . Call the new programm ctrlc2.c . */
/* How It Works
The program calls sigaction instead of signal to set the signal handler for Ctrl+C ( SIGINT ) to the
function ouch . It first has to set up a sigaction structure that contains the handler, a signal mask, and
flags. In this case, you don’t need any flags, and an empty signal mask is created with the new function,
sigemptyset .
After running this program, you may find a core dump (in a file called core ) has been created. You can
safely delete it.
*/
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
void ouch(int sig)
{
printf("OUCH! - I got signal %d\n", sig);
}
int main()
{
int ret;
struct sigaction act;
act.sa_handler = ouch;
//sigemptyset(&act.sa_mask); // initializes a signal set to be empty.
//sigfillset(&act.sa_mask); // initializes a signal set to contain all define signals
/*
// add a specified signal ( signo ) from a signal set
if(sigaddset(&act.sa_mask, SIGINT)<0) 
{  printf("the specified signal is invalid\n");
   exit(1);}
*/
/*
//delet a specified signal ( signo ) from a signal set
if(sigdelset(&act.sa_mask, SIGINT)<0)
 {
   printf("the specified signal is invalid\n");
   exit(1);
 }
 */
//determines whether the given signal is a member of a signal set
ret= sigismember(sigset_t *set, int signo);
if(ret==0)
   printf(" it isn't a member of the set\n");
  else if(ret<0)
{   printf(" the signal is invalid\n");
    exit(1);}
else
  printf("the signal is a member of the set\n");

act.sa_flags = 0;
sigaction(SIGINT, &act, 0);
while(1) {
printf("Hello World!\n");
sleep(1);
}
}
/*
When you run this version of the program, you always get a message when you type Ctrl+C because
SIGINT is handled repeatedly by sigaction . To terminate the program, you have to type Ctrl+\, which
generates the SIGQUIT signal by default.
*/
