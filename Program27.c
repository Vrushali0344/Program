//Accept no from user the check weather is perfect or not
#include<stdio.h>
#include<stdbool.h>
int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++) 
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

}
bool CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactor(iNumber);
    if(iResult == iNumber)
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

    printf("Enter the Number you want to Check : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);

    }
    else
    {
       printf("%d is  not perfect number\n",iValue);

    }
    return 0;

}