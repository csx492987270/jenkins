#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SZ 256

int test_rxs(void)
{
  int n;
  char buffer[BUF_SZ];

  int sockfd = socket(AF_INET, SOCK_STREAM, 0);

  if (sockfd < 0) {
    perror("ERROR opening socket");
    exit(1);
  }

  n = read(sockfd,buffer,255);
  /* use buffer
     if buffer is used as argument to system() or to setenv()
     the buffer may contain untrusted commands or characters 
     leading to unpredictable program behavior
  */
  return 0;
}