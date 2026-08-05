//arrays
// to find size of array

#include<stdio.h>

int main() {
    int arr[10];
    printf("size of array is %d\n", sizeof(arr)/sizeof(arr[0]));
    
//  int a[];------>invalid declaration of array because size is not specified
// a[n-1]--
    int arr1[5]={10,20,30,40,50};
    printf("%d",arr1[5]);// will give garbage value because array index starts from 0 to 4 and arr1[5] is out of bounds



     int arr2[5]={10,20};//{10,20,0,0,0}
    printf("%d",arr2[2]);// will give garbage value because array index starts from 0 to 2 and arr2[2] is uninitialized---->gives the last element of the array


        int arr3[3];
    printf("%d",arr3[1]);// will give garbage value because array index starts from 0 to 2 and arr3[1] is uninitialized



    //to add elements in array
        int arr4[5]={10,20,30,40};
    arr4[4]=50;
    


    return 0;
}
