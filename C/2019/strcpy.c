// strcpy.c
#include <stdio.h>
#include <string.h>

int main(void) {
/*
int i;
i = 100;
*/
  //
  char str[20];
  //char str[5]; // ���ꂾ�Ɨ�����
  //strcpy(str, "Hello world"); // 12����
  strcpy_s(str, 20, "Hello world"); // 12����

  //
  printf("%s\n", str);

  return 0;
}
