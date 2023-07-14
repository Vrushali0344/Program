//Accept n number from user and find maximum number from the Array

#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int Max(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of Array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]); 
    }
    iRet = Min(ptr , iSize);
    printf("Smallest element is : %d\n",iRet);

    iRet = Max(ptr , iSize);
    printf("Largest element is : %d\n",iRet);

    free(ptr);

    return 0;
}