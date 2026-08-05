// crazy loops
#include<stdio.h>

int main() {

    int i, j;
    int x = 10;

    for(i = 1; i <=3; i++) {
        x+=5;        // increments x by 5 in each iteration of the outer loop
        for(j = 0; j <3; j++) {
            x+=10;
        }
        x--;
    }

    printf(" %d\n", x);
    return 0;
}