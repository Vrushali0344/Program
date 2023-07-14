//Addition of factors    70,64,30,15,50=229

#include<stdio.h>

int DisplayFactorSum(int iNo)
{
   int iCnt = 0;
   int iSum = 0;
   
   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
   {
        if((iNo % iCnt)==0)
        {
           iSum = iSum + iCnt;
        }
   }
   return iSum;
}
 
int main()
{
    int iValue;
    int iRet = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = DisplayFactorSum(iValue);
    printf("Summation of factor is : %d\n",iRet);
    return 0;

}