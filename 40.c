// to find the frequency of characters in the string
#include<stdio.h>
#include<string.h>
void main()
{
    char word[]="MADAM";
    int l=strlen(word);
    char ch,count;
    for(int i=0;i<l;i++)
    {
        ch=word[i];
        count=0;
        for(int j=0;j<l;j++)
        {
            if(ch==word[j])
            {
                count ++;
            }
        }
         printf("%c --> %d",ch,count);
    }
   
}