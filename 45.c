#include<stdio.h>
#include<stdbool.h>

bool fun(char a) {
    // Added uppercase vowels just in case
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u') 
        return true;
    else 
        return false;
}

int main() {
    char a[]={'h','e','l','l','o'};
    int l=0;
    int r=(sizeof(a)/sizeof(a[0]))-1;
    
    while(l<r) {
        // FIXED: Pass the character to the function, then check if it is false
        while(l<r && fun(a[l]) == false) l++;
        while(l<r && fun(a[r]) == false) r--;
        
        char temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        
        l++;
        r--;
    }
    
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++) {
        printf("%c",a[i]);
    }
    
    return 0;
}
