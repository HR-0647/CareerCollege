// file4.c
#include <stdio.h>

int main(void) {
  char *filename = "file2.txt";

  //FILE *fp = fopen(filename, "w"); // �㏑��
  FILE *fp = fopen(filename, "a"); // �ǉ�
  if (fp == NULL) {
    printf("�t�@�C�� %s �͑��݂��܂���\n", filename);
    return -1;
  }
  //
  printf("�t�@�C�� %s ��open���܂����B\n", filename);

  // "abc"����������( fputs������� )
  fprintf(fp, "abc %d\n", 10);
  fprintf(fp, "def %d\n", 20);

  //
  fclose(fp);
  //
  return 0;
}


