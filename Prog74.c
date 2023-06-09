//Count Capital charcters from string

#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if((*str >='A') && (*str <='Z') )
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

    CountCapital(arr);

    return 0;
}