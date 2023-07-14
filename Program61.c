// Accept number from user check digit is in Number or not
#include<stdio.h>
#include<stdbool.h>

int CountEvenDigit(int iNo)
{
 int iCount = 0;
 int iDigit = 0;

 if(iNo < 0)
 {
    iNo = -iNo;
 }
 while(iNo != 0)
 {
    iDigit = iNo % 10;
    if(iDigit % 2 == 0)
    {
    iCount++;
    }
    iNo = iNo % 10;
 }
    return iCount;
}      

int main()
{
   int iValue1 = 0;
   int iRet = 0;


   printf("Enter the Number : \n");
   scanf("%d",&iValue1);

    iRet = CountEvenDigit(iValue1);
    printf("Frequency of even digit in %d is %d\n",iValue1,iRet);
    return 0;
}