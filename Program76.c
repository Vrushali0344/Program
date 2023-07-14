#include<stdio.h>  //IO
#include<stdlib.h>   //Memory management

// *********Step 5 :  Perform the operation on Araay***********
int Addition(int Arr[],int iLength)
{
    int iSum = 0;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;

}
int main()  //Entry point Function
{
    int iSize = 0;   // to store size of array
    int *ptr = NULL;    // to strore address of array
    int iCnt = 0;
    int iRet = 0;       // Loop Counter

// **********Step 1 : Accept number of elements from user****
    printf("Enter the Number of elements :\n");
    scanf("%d",&iSize) ;

// **********Step 2 : Allocate memory dynamically******
    ptr = (int *)malloc(iSize * sizeof(int));

// ************Step 3 : Accept the value fron user *********

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
    // **********Step 4 : Passed the Array to the function*********
    Addition(ptr,iSize);   //Demo(400,4)

    //************Step 6 : Dealloacte the memmory of array**********
    iRet = Addition(ptr,iSize);
    printf("Addition of array is %d",iRet);
    free(ptr);

     return 0;   //Return Success to OS
}