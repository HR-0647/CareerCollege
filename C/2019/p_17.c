// p_17.c
#include <stdio.h>

// �\���̂�錾
typedef struct {
  int x;
  int y;
} POINT;

void hoge(POINT* pp) {
  pp->x = 111;
  pp->y = 222;
}

int main() {
  //
  POINT point;
  hoge(&point);
  printf("%d, %d\n", point.x, point.y);
  //
  return 0;
}


