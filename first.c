#include <stdio.h>

int main(){
    int var=5;

    if (var--){
        printf("%d", var);
        main();
    }

    return 0;
}

