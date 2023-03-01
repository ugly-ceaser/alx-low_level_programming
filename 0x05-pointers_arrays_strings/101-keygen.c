#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 6

int main(void)
{
  char password[PASSWORD_LEN + 1];
  int i;

  srand(time(NULL));

  for (i = 0; i < PASSWORD_LEN; i++) {
    password[i] = rand() % ('z' - '0' + 1) + '0';
  }

  password[PASSWORD_LEN] = '\0';

  printf("Tada! Congrats");

  return EXIT_SUCCESS;
}
