//Accept n number and also accept one another no .chrck weathr no is in array or not.
//Accept n number from user and find maximum number from the Array

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[],int iLength , int iNo)
{
 int iCnt = 0;
 bool bFlag = 0;
 for(iCnt = 0; iCnt <= iLength; iCnt++)  
 {
    if(Arr[iCnt] == iNo)
    {
        bFlag = true;
        break;
    }
 }
    return bFlag;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

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

    bRet = Search(ptr ,iSize,iValue);
    if(bRet == true)
    {
        printf("%d is present in the Array\n",iValue);
    }
    else
    {
        printf("%d is not present in the Array\n",iValue);

    }
    free(ptr);

    return 0;
}