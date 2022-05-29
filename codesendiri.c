#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
  for(int i = 1; i < 13; i++) {
    pid_t name = fork();

    if(name == 0) {
      printf("Enter name");
	printf(name);

      exit(0);
    }
    else  {
      printf("Parent process => PID=%d\n", getpid());
      printf("Waiting for child processes to finish...\n");
      wait(NULL);
      printf("Job is done\n");
    }
  }

  return EXIT_SUCCESS;
}

