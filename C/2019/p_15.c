// p_15.c
#include <stdio.h>

// �\���̂�錾
typedef struct {
  int x;
  int y;
} POINT;

int main() {
  //
  POINT point;
  printf("%p\n", &point);

  POINT* pp = &point;
  printf("%p\n", pp);


  //
  return 0;
}


