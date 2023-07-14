// Accept number from user check 8 is in Number or not
#include<stdio.h>
#include<stdbool.h>

int CountDigitFrequency(int iNo)
{
 int iDigit = 0;
 int iCount = 0;
    while(iNo != 0)
    {
       iDigit =iNo % 10;
       if(iDigit == 8)
       {
        iCount++;
       }
        iNo = iNo / 10;
    }
    return iCount;
    
 }

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   iRet = CountDigitFrequency(iValue);
   printf("Frequency of 8 is : %d\n",iRet);

    return 0;
}