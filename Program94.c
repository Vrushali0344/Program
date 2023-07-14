//Pattern printing 
// Input : 7
//Output : # # # # # # #

// Input : 3
//Output : # # # 

#include<stdio.h>

void Display(int iValue)
{
    for(int i = 1; i <= iValue; i++)
    {
        printf("#\t");     // \t is  for same place distance .tab
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