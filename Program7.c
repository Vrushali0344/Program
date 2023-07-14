//Accept the Number from user check whether Number is divisible by 3 & 5.

#include<stdio.h>              // for printf and scanf
#include<stdbool.h>           //for bool data type

/////////////////////////////////////////////////////////
//
// function Name : 
//Input : Integer
//Output : Boolean
//Description : Check whether input is divisible by 3 & 5.
//Author : Vrushali Anil Shewale
//Date : 25/04/2023
//Update Date : 26/04/2023
//
/////////////////////////////////////////////////////////

bool CheckDivisible(int a)
{
  if((( a % 3 ) == 0) && ((a % 5 ) == 0))
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

    printf("Enter the Number to check whether it is divisible by 3 and 5 : \n");
    scanf("%d",&n);

    bRet = CheckDivisible(n);   //function call

    if(bRet == true)
    {
     printf(" %d is Completely Divisible by 3 And 5.../n",n);
    }
    else
    {
      printf("%d is  Completely Not divisible by 3 Or 5.../n",n);
    }
    return 0;
}



/*
Logical Operator

1: Logical AND &&
 
 2: Logical OR ||

 Expression1              Expression2              &&              ||
 ----------------------------------------------------------------------------
 true                        true                 true            true
 true                        false                false           true
 false                       false                false           false 
 false                       true                 false           true
 --------------------------------------------------------------------------------

*/