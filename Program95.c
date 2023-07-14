#include<stdio.h>

void Display(iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    printf("*\t");
    }
}
int main()
{
    int iFrequency = 0;

    printf("Enter the Frequency of Symbol : \n");
    scanf("%d",&iFrequency);
     
    Display(iFrequency);
    return 0;
}