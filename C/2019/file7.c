// file7.c
#include <stdio.h>

int main(void) {
  char *filename = "file2.txt";

  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("�t�@�C�� %s �͑��݂��܂���\n", filename);
    return -1;
  }
  //
  printf("�t�@�C�� %s ��open���܂����B\n", filename);

  // �ǂݍ���
  int buf;
  while((buf = fgetc(fp)) != EOF) {
    printf("%c", buf);
  }

  //
  fclose(fp);
  //
  return 0;
}



