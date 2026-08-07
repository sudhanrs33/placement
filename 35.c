// two sum
#include <stdio.h>
int main() {
    int a[10],r1,r2;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int target;
    printf("Enter the target:");
    scanf("%d",&target);

    for(int i=0;i<n-1;i++)
    {
         for(int j=i+1;j<n;j++)
         {
            if(a[i]+a[j]==target)
            {
                r1=i;
                r2=j;
            }
         }
    }
    printf("%d %d",r1,r2);
    return 0;
}
// tracing or the logic
// 1 2 3 4 5 
// i
//   j