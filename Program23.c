#include<stdio.h>
 
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    // for (iCnt =1; iCnt <= (iNo - 1); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
        printf("%d\n",iCnt);
        }
    } 
}

int main()
{

int iValue = 0;
printf("Enter the Number : \n");
scanf("%d",&iValue);

DisplayFactors(iValue);
return 0;

}