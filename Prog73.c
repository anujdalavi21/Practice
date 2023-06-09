//Count small charcters from string

#include<stdio.h>
int CountSmall(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if((*str >='a') && (*str <='z') )
        {
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    char arr[10];

    printf("Enter the string:");
    scanf("%[^'\n]s",arr);

    CountSmall(arr);

    return 0;
}