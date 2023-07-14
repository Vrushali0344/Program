#include<stdio.h>
//Function name : addition
//input : unsigned integer,unsigned integer
//Output :unsigned integer
//Description : Aceept two integer perform addition of number
//Author:Vrushali Anil Shewale
//Date :18/04/2023

unsigned int Addition(unsigned int ivalue1,unsigned int ivalue2)
{
    unsigned int iResult=0;
    iResult = ivalue1 + ivalue2;
    return iResult;
}
//Entry Point Function 
int main()
{
    unsigned int iNo1=0, iNo2=0,iAns=0;

    printf("Enter the First Number : \n");
    scanf("%d",&iNo1);

     printf("Enter the Second Number : \n");
    scanf("%d",&iNo2);

    iAns=Addition(iNo1,iNo2);
    printf("Addition is : %d \n",iAns);

    return 0;


}
