#include<stdio.h>


int main(){
    int a=10;
    int *b = &a;
    int **c = &b;

    printf("%p\n", b);
    printf("%d\n", a**b);
    printf("%d\n", a***c);

    return 0;
}
