    childTask();
    exit(EXIT_SUCCESS);
  }
  else if(pid > 0) {
    wait(NULL);
    parentTask();
  }
  else {
    printf("Unable to create child process.");
  }

  return EXIT_SUCCESS;
}


