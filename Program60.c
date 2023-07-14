// Accept number from user check digit is in Number or not
#include<stdio.h>
#include<stdbool.h>

int CountDigitfrequency(int iNo,int iSearch)
{
 int iDigit = 0;
 int iCount = 0;

 if((iSearch < 0) || (iSearch > 9))
 {
    printf("Enter the digit in range 0 to 9\n");
    return false;
 }
 if(iNo < 0)
 {
    iNo = -iNo;
 }

 while(iNo != 0)
 {
    iDigit = iNo % 10;
    if(iDigit == iSearch)
    {
        iCount++;
    }
    iNo = iNo / 10;
}
return iCount;
}

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   int iRet = 0;


   printf("Enter the Number : \n");
   scanf("%d",&iValue1);

   printf("Enter the Digit( 0 to 9)\n");
   scanf("%d",&iValue2);

    iRet = CountDigitfrequency(iValue1,iValue2);
    printf("Frequency of Digit is : %d\n",iRet);

    return 0;
}