#include <stdio.h>

void main() {
    char a[] = {'m', 'a', 'd', 'a', 'm'};
    int length = sizeof(a) / sizeof(a[0]);
    
    char b[5]; 
    int P= 1;

    
    for(int i = 0; i < length; i++) {
        b[i] = a[i];
    }

    // Reverse array 'a'
    int l = 0;
    int r = length - 1;
    while (l < r) {
        char temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++; // Fixed syntax
        r--;
    }

    // Compare the reversed array 'a' with the original copy 'b'
    for (int i = 0; i < length; i++) {
        if (a[i] != b[i]) {
              printf("NOT PALINDRONE");
              break;
        }
        else{
            printf("IS PALINDRONRE");
            break;
        }
    }

    
}
