//Accept Input from User Check whether No. is Even or Odd.

#include<stdio.h>               // for printf and scanf
#include<stdbool.h>           //for bool data type

/////////////////////////////////////////////////////////
//
// function Name : CheckEvenOdd
//Input : Integer
//Output : Boolean
//Description : Check whether input is even or odd
//Author : Vrushali Anil Shewale
//Date : 25/04/2023
//Update Date : 26/04/2023
//
/////////////////////////////////////////////////////////

bool CheckEvenOdd(int a)
{
  if((a % 2) == 0)
  {
    return true;
 
  }
  else
  { 
    return false;
  }
}
//////////////////////////////////////////////////
///Entry Point Function
///////////////////////////////////////////////////

int main()
{
    int n = 0;
    bool bRet = false;                 //variable to accept return value

    printf("Enter the Number to check whether it is even or odd : \n");
    scanf("%d",&n);

    bRet = CheckEvenOdd(n);   //function call

    if(bRet == true)
    {
     printf("%d is Even...",n);
    }
    else
    {
      printf("%d is Odd...",n);
    }
    return 0;
}