#include <stdio.h>

void print_regular(int *ages, char *names[]) {
  int i = 0;

  for (i = 0; ages[i] >= 0; i++) {
    printf("%s has %d years alive. \n", names[i], ages[i]);
  }
}

int main(int argc, char *argv[]) {
  // create two arrays we care about
  int ages[] = {23, 43, 12, 89, 2, -1};
  char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

  int count = sizeof("ABC");
  printf("%ld\n", count);
  printf("%ld\n", sizeof(char));

  print_regular(ages, names);

  printf("---\n");
 
  return 0;
}
