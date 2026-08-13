#include <stdio.h>
#include <unistd.h> // fork(), getpid(), sleep()
#include <sys/wait.h> // wait()
int main()
{
pid_t pid;
/*
*/
pid = fork();
Create a child process
/*
Check process creation failure
*/
if(pid < 0)
{
printf("Process creation failed\n");
return 1;
}
