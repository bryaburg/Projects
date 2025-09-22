/* Program: redirection.c -- Opens files in the child and uses dup2 to reassign the descriptors. First two arguments are input and output filenames. The command line to execute is specified as the remaining arguments */
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <wait.h>
#include "quit.h"

#define OPENFLAGS (O_WRONLY | O_CREAT | O_TRUNC)
#define MODE6OO (S_IRUSR | S_IWUSR)

int main(int argc, char **argv) {
    int fd1, fd2, rv, exit_status;

    if (fork() == 0) {
        /* Child */
        if ((fd1 = open(argv[1], O_RDONLY)) == -1)
            quit(“Error in opening file for reading\n”, 1);
        if ((fd2 = open(argv[2], OPENFLAGS, MODE6OO)) == -1)
            quit(“Error in opening file for writing\n”, 1);
        dup2(fd1,STDIN_FILENO);
        dup2(fd2,STDOUT_FILENO);
        execvp(argv[3], &argv[3]);
        /* Uses PATH */
        quit(“exec error”, 2);

    } else {
        /* Parent */
        wait(&rv);
        /* Or use waitpid(-1, &rv, 0) */
        printf(“Exit status: %d\n”, WEXITSTATUS(rv));
        exit(0);
    }
}
