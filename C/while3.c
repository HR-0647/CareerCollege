// while3.c
#include <stdio.h>

int main(void) {
  int c; // char�ł͂Ȃ�int
  while((c = getchar()) != EOF) {
    putchar(c);
  }
  // �Ō�ɉ��s�P�B
  printf("\n");

  return 0;
}
