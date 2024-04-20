#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{
    int a =5;
    int b =10;

    int *m = &a;
    int *n = &b;

    swap(&a, &b);
    printf("gia tri chuyen doi la: %d - %d", a, b);
    printf("\n");



    printf("Hello world!\n");
    return 0;
}
