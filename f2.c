#include <stdio.h>
#include <string.h>       
int main()
{
    char str[20],t;
    int i,j,l;
    printf("enter the string ");
    fgets(str,20,stdin);
    l=strlen(str);
    for(i=1;i<=l;i++)
    {
        for(j=0;j<l-i;j++)
        {
            if(str[j]>str[j+1])
            {
                t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }
    printf("%s",str);
}