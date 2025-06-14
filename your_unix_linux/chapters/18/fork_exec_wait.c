/* Program: fork_exec_wait.c -- Uses fork, exec and wait to run a UNIX command The WEXITSTATUS macro fetches the exit status. */
#include <stdio.h>
#include <wait.h>
#include <fcntl.h>
#include "quit.h"
int main (int argc, char **argv) {
    int fd, status ;
    fd = open(“foo.log”, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    write(fd, “About to fork\n”, 14);
    /* First write */
    switch(fork()) {
        case -1: quit(“fork”, 1);
            case 0:
                /* Child */
                write(fd, “About to exec\n”, 14);
                close(fd);
                /* Closing here doesn’t affect parent’s copy */
                if ((execv (argv[1], &argv[2]) < 0)) {
                    fprintf(stderr, “execl error\n”);
                    exit(200);

                }
            default:
                /* Parent */
                write(fd, “Parent waiting\n”, 15);
                wait(&status);
                /* or waitpid(-1, &status, 0); */
                write(fd, “Child Terminated\n”, 17);
                fprintf(stderr, “Exit status: %d\n”, WEXITSTATUS(status));
                close(fd);
                /* Closing here doesn't */
                /* child's copy */
                exit (0);

    }

}
