// rand.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //
  int r;
  // 乱数のシードを設定
  srand((unsigned)time(NULL));

  // 乱数を作る
  r = rand() % 101; // 0-100
  printf("rand is %d\n", r);

  return 0;
}
