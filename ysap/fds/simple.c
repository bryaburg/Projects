// man 2 open
// nubmer 2 = sys calls
// man 2 close in different location

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  // int fd = open("/ect/passwd", O_RDONLY);

  int fd = open("./my-file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

  if (fd == -1) {
    perror("open");
    return 1;
  }

  printf("fd = %d\n", fd);

  // write to the file

  char buf[] = "hello world\n";
  size_t count = sizeof(buf) - 1;
  ssize_t n = write(fd, buf, sizeof(buf) - 1);

  if (n != count) {
    perror("wite");
    return 3;
  }

  /* Reading a file
  int fd = open("/ect/passwd", O_RDONLY);

  if (fd == -1){
    return 1;
  }
  // read the file

  int count = 80;
  char buf[count + 1];
  ssize_t n = read(fd, &buf, count);

  if (n < 0) {
    return 1;
  }

  buf[80] = '\0';

  printf("read data: %s\n", buf); */

  close(fd);

  return 0;
}
