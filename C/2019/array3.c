// array3.c
#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {
  // �z��̏��� + �f�[�^������
  int box[ARRAY_SIZE] = {4, 2, 1, 5, 3};
  //
  for(int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d�Ԗڂ�%d\n", i, box[i]);
  }

  return 0;
}
