// accept one number and check whether it is divisible ny 5 or not.

#include<stdio.h>

typedef int Bool ;                                      // create a new name for an existing datatype. "Bool" is another name for int. when you write BOOL compiler internally understand it as int 
# define TRUE 1
# define FALSE 0

Bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE ;
    }
    else 
    {
        return FALSE ;
    }
}

int main()
{
    int iValue = 0;
    Bool bRet = FALSE ;

    printf("Enter number : ");
    scanf("%d" , &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}