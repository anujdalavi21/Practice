//Check charcter is capital case or not

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >='A') && (ch <='Z'))
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

    bRet=CheckCapital(ch);
    if(bRet==true)
    {
        printf("%c is a capital case letter\n", ch);
    }
    else
    {
        printf("Not a capital case");
    }

    return 0;
}