#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//a11472o5t6
int main() 
{
    char num[1000];
    char arr[1000];
    int i,j=0;
    gets(num);
    int Aa[10] = {0};
    for(i=0;i<strlen(num);i++)
    {
        if(num[i]>='0' && num[i]<='9')
        {
            arr[j] = num[i];
            j++;
        }
    }
//    for(i=0;i<strlen(num);i++)
//    {
//        A[arr[i]]++;
//    }
    for(i=0;i<strlen(arr);i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}



