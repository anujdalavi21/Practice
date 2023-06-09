//Check charcter is digit case or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch >='0') && (ch <='9'))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char ch='\0';
    bool bRet=false;
    printf("Enter a character:");
    scanf("%c",&ch);

    bRet=CheckDigit(ch);
    if(bRet==true)
    {
        printf("%c is a  digit letter\n", ch);
    }
    else
    {
        printf("Not a  digit");
    }

    return 0;
}