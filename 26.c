// convert decimal to 4 bit binary
#include <stdio.h>
int  main()
{
 //   printf("%04b",10);
    //OR    
int n=7;
for(int i=3;i>=0;i--){
    printf("%d",(n>>i)&1);
}