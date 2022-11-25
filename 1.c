#include <stdlib.h>
#include <stdio.h>

int main(){
    int a = 1, b = -5;

    b = ~b + 1;

    printf("%d\n\n", a+b);
    return 0;
}
