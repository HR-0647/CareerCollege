// while4_pre.c
#include <stdio.h>
#include <ctype.h>

int main(void) {
  //
  int c;
  c = getchar();
  //
  if (isupper(c)) {
    printf("���͂��ꂽ����(%c)�͑啶���ł�\n", c);
  } else if (islower(c)) {
    printf("���͂��ꂽ����(%c)�͏������ł�\n", c);
  } else {
    printf("���͂��ꂽ����(%c)�͑啶���ł��������ł�����܂���\n", c);
  }

  return 0;
}
