/* Program: fork.c -- A simple fork shows PID, PPID in both parent and child */

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
  pid_t pid;

  printf("Before fork\n");
  /* Replicate current process */
  pid = fork();

  /* In the parent process; make sure*/
  if (pid > 0){
    /* that parent doesn't die before child */
    sleep(1);
    printf("PARENT --PID: %d PPID: %d\n",
        getpid(), getppid(), pid);
  }
  /* In the child process */
  else if (pid == 0)
    printf("CHILD -- PID: %d PPID: %d\n", getpid(), getppid());
    /* pid must be -1 here */
  else{
    printf("Fork error\n");
    exit(1);
  }
  
  /* in both processes */
  printf("Both processes continue from here\n");
  exit(0);
}
