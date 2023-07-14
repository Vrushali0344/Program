#include<stdio.h>

float DigitsAverage(int iNo)
{
   int iDigit = 0;
   int iSum = 0;
   int iCount = 0;

   if(iNo < 0)
   {
    iNo = - iNo;
   } 
   while(iNo != 0)
   {
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iCount++;
    iNo = iNo / 10;
   }
   return (float)((float)iSum / (float)iCount);
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    fRet = DigitsAverage(iValue);

    printf("Average of digit is : %f\n",fRet);

    return 0;
}