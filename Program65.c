//Number Pallindrone or not
//pallindrone string is maens String is same as its reverse.

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrone(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

while(iNo != 0)
{
    iDigit = iNo % 10;
    iReverse =(iReverse * 10) +iDigit;
    iNo = iNo / 10;
}
if(iReverse == iTemp)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrone(iValue);

    if(bRet == true)
    {
        printf("%d is pallindrone number \n",iValue);
    }
    else
    {
        printf("%d is not pallindrone number \n",iValue);

    }
    return 0;
}