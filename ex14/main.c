#include <stdio.h>
#include <ctype.h>
#include <string.h>

int can_print_it(char ch);
void print_letters(char arg[], int len_of_str);

void print_arguments(int argc, char *argv[]) {
  int i = 0;

  for (i = 0; i < argc; i++) {
    int len_of_str = strlen(argv[i]);
    print_letters(*(argv + i), len_of_str);
  }
}

void print_letters(char argv[], int len_of_str) {
  int i = 0;

  for (i = 0; i < len_of_str; i++){
    char ch = *(argv + i);

    if (can_print_it(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
  }

  printf("\n");
}

int can_print_it(char ch) {
  return isalpha((int)ch) || isblank((int)ch);
}

int main(int argc, char *argv[]) {
  print_arguments(argc, argv);
  return 0;
}
