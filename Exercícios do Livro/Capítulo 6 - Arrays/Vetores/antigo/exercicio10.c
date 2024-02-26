#include <stdio.h>


int main(){

    int i = 0, cont = 1;
    int multiplos[100];

    while (i < 100) {
        if (cont % 7 != 0) {
            multiplos[i] = cont;
            i++;
        }
        cont++;
    }

    for(i = 0; i < 100; i++){
        printf("%d\n", multiplos[i]);
    }

    return 0;
}