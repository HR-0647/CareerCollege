// file6.c
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
  char buf[10];
  while(fgets(buf, 10, fp) != NULL) {
    printf("%s\n", buf);

  }

  //
  fclose(fp);
  //
  return 0;
}



