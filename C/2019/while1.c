// while1.c
#include <stdio.h>

int main(void) {
  //
  /*
  for(int i = 0; i < 10; i ++) {
    printf("%d\n", i);
  }
  */
  int i = 0;
  while(i < 10) {
    printf("%d\n", i);
    i ++;
  }
  // ������ƃn�C���x���ȏ�����
  i = 0;
  while(i < 10) {
    printf("%d\n", i++);
  }

  return 0;
}
