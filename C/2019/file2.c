// file2.c
#include <stdio.h>

int main(void) {
  char *filename = "file.txt";

  //FILE *fp = fopen(filename, "w"); // �㏑��
  FILE *fp = fopen(filename, "a"); // �ǉ�
  if (fp == NULL) {
    printf("�t�@�C�� %s �͑��݂��܂���\n", filename);
    return -1;
  }
  //
  printf("�t�@�C�� %s ��open���܂����B\n", filename);

  // "abc"����������
  fwrite("abc\n", 1, 4, fp);

  //
  fclose(fp);
  //
  return 0;
}


