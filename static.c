#include <stdio.h>

int f(int n){
    static int r=10;
    if (n <= 0)
        return (7);
    if (n > 2)
        return (f(n-1) + r);
    else{
        r = 17;
        return (n + f(n-1));
    }
}

int main(){
    int n=7;
    printf("%d", f(n));

    return 0;
}
