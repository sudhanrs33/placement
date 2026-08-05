//sum of the alternative elements by accessing the values from the end of the array
#include<stdio.h>
int main(){
    int a[]={9,1,3,5,2,7,4};
    int l=sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int i=l-1;i>=0;i-=2){
        sum+=a[i];
    }
    printf("Sum of alternative elements from the end: %d", sum);
}