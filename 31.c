//find frequency 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    scanf("%d",&a[i]);
}

for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    if(a[i]==-1)continue;
    int c=0;
    int p=a[i];
for(int j=i;j<sizeof(a)/sizeof(a[0]);j++)
{

    
    if(p==a[j])
    {
        a[j]=-1;
        c++;
    }
    
}
printf("%d- %d\n",p,c);
   
}

return 0;
}