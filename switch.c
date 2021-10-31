#include <stdio.h>

int main(){
    int i;
    for (i=1; i<=30; i++){
        switch(i){
            default: i+=2;
            case 1: i+=5;
            case 2: i+=3;
            case 3: i+=7;
        }
        printf("%d\n", i);
    }


    return 0;
}
