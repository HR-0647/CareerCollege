// file.c
#include <stdio.h>

int main(void) {
  //char *filename = "hoge.hoge";
  char *filename = "file.c";

  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("�t�@�C�� %s �͑��݂��܂���\n", filename);
    return -1;
  }
  //
  printf("�t�@�C�� %s ��open���܂����B\n", filename);

  //
  fclose(fp);
  //
  return 0;
}
