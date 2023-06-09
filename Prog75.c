//Count frequncy of specific character
//Count small charcters from string

#include<stdio.h>
int CountFerq(char *str, char ch)
{
    int iCnt=0;
    while(*str !='\0')
    {
     if(*str==ch)
     {
        iCnt++;
     }   
    }
    return iCnt;
}
int main()
{
    char arr[10];
    
    char ch='\0';
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^'\n]s",arr);

    printf("Enter specific character:");
    scanf("%c",&ch);

    iRet=CountFerq(arr ,ch);
    printf("Frequency of charcter is :%d",iRet);

    return 0;
}