//  func3.c
//  cl  func3.c
#include <stdio.h>

void add(int *i, int *j);
void add(int *i, int *j) {
    (*i) = (*i) + (*j);
}

int main() {
    int i = 10;
    int j = 20;
    add(&i, &j);
    printf("%d \n", i);

    return 0;
}
