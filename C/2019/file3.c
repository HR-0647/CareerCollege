// file3.c
#include <stdio.h>

int main(void) {
  char *filename = "file.txt";

  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("�t�@�C�� %s �͑��݂��܂���\n", filename);
    return -1;
  }
  //
  printf("�t�@�C�� %s ��open���܂����B\n", filename);

  // �ǂݍ���
  char buf[10];
  fread(buf, 1, 9, fp);
  buf[9] = '\0';
  printf("%s\n", buf);

  //
  fclose(fp);
  //
  return 0;
}



