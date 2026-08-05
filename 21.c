// crazy loops
#include<stdio.h>

int main() {

    int i, j;
    int x = 10;
    for(i = 1; i <=3; i++) {      
        // x=5;                         resets the value of x to 5 in each iteration of the outer loop
        for(j=i; j <=3; j++) {
        x+=5;
        }
        x--;
    }

    printf(" %d\n", x);
    return 0;
}