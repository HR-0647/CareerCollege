// if2.c
#include <stdio.h>
#include <string.h>
#include "get_line.h"

// �萔
#define BUFFER_SIZE 256

int main(void) {
  // �������擾
  char buffer[BUFFER_SIZE];
  printf("����: ");
  get_line(buffer, BUFFER_SIZE);

  // ��r�p�̕������쐬
  char s[] = "abc";

  // ���͂Ɣ�r
  //if (buffer == s) {
  if (strcmp(buffer, s) == 0) {
    printf("%s �� %s�Ȃ̂ŁA����������ł�\n", buffer, s);
  } else {
    printf("%s �� %s�Ȃ̂ŁA�Ⴄ������ł�\n", buffer, s);
    printf("%p \t %p \n", buffer, s);
  }

  return 0;
}






