#include<stdio.h>  //IO
#include<stdlib.h>   //Memory management

int main()  //Entry point Function
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

// Step 1 : Accept number of elements from user
    printf("Enter the Number of elements :\n");
    scanf("%d",&iSize) ;

// Step 2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

// Step 3 : Accept the value fron user

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of arrray are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);

    } 
     return 0;   //Return Success to OS
}