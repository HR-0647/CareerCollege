// func1.c
#include <stdio.h>

// �֐��錾
int add(int a, int b);
int sub(int a, int b);

// �֐������F�����Z����֐�
int add(int a, int b) {
    return a + b;
}
// �֐������F�����Z����֐�
int sub(int a, int b) {
    return a - b;
}
//
int main(void) {
  //
  int i;
  i = add(10, 20);
  printf("add is %d\n", i);
  i = sub(10, 20);
  printf("sub is %d\n", i);

  return 0;
}
