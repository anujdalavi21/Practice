//Check charcter is small case or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >='a') && (ch <='z'))
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

    bRet=CheckSmall(ch);
    if(bRet==true)
    {
        printf("%c is a small case letter\n", ch);
    }
    else
    {
        printf("Not a small case");
    }

    return 0;
}