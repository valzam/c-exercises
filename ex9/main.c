#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 1;
  while (i <= 25) {
    printf("%d", i);
    i++;
  }

  //need this to add a final newline
  printf("\n");

  return 0;
}
