//Accept n number from user and find maximum number from the Array

#include<stdio.h>
#include<stdlib.h>

void MaximumMinimum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    printf("Smallest elements is : %d\n",iMin);
    printf("Largest elements is : %d\n",iMax);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

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
    MaximumMinimum(ptr , iSize);

    free(ptr);

    return 0;
}