// accept one character from user and convert case of that character.

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue = CValue + 32);                          // We use 32 because of the ASCII value difference between uppercase and lowercase letters.
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue = CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}