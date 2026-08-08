#include<stdio.h>
#include<stdbool.h>

int  fun(char p[],int len,char c) {
int count =0;
    for(int i=0;i<len;i++)
    {
       if(p[i]==c)count++;
    } 

      
}

int main() {
    char a[]={'g','o','d'};
      char b[]={'d','o','g'};
    int q=(sizeof(a)/sizeof(a[0]))-1;
    int p=(sizeof(a)/sizeof(a[0]))-1;
if(p!=q){printf("NOT ANANGRAN"); return 0;}

int i=0;

while(i<=p)
{
    if(fun(a,p+1,a[i])!=fun(b,q+1,a[i]))
    {
        printf("NOT ANANGRAM");
        return 0;
    }
    i++;
}

   
    printf("ANANGRAM");
    
    return 0;
}
