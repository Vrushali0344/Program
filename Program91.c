//Accept n number and also accept one another no .chrck weathr no is in array or not.
//Accept n number from user and find maximum number from the Array

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1
int SearchFirstOccurance(int Arr[],int iLength , int iNo)
{
 int iCnt = 0;
 for(iCnt = 0; iCnt <= iLength; iCnt++)  
 {
   if(Arr[iCnt] == iNo)
   {
    break;
   } 
 }
 if(iCnt == iLength)
 {
    return -1;
 }
 else
 {
    return iCnt;
 }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

    printf("Elements of Array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]); 
    }

    iRet = SearchFirstOccurance(ptr ,iSize,iValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
    printf("%d Occured at index %d\n",iValue,iRet);

    }
    free(ptr);

    return 0;
}