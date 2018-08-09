#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
 char *const argv[]={"ps","-eaf",0};
char *const envp[] = {"PATH=/bin:/usr/bin", "TERM=console", 0};
printf("Running ps with execlp\n");
//When ps/ls finishes, you get a new shell prompt. You don’t return to pexec , so the second message / programme doesn’t get printed
//execlp("ps", "ps", "-eaf", 0); // * assumes /bin is in PATH *
//execlp("ps","ps","ax",0);
/* execl("/bin/ls","ls","-a",0);
 execl("/bin/ps","ps","ax",0); // assumes ps is in /bin
*/
//execv("/bin/ps",argv);
//execvp("ps",argv);
execvpe("/bin/ps", argv,envp);
printf("Done.\n");
exit(0);
}
