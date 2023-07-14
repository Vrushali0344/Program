// Write a program to  accept the marks  and Display the class of student.
// 0 to 34     Fail
// 34 to 49    Pass class
// 50 to 59    Second class
// 60 to 74    First class
// 75 to 100   First class with Destinction
#include<stdio.h>
#include<stdbool.h>

void DisplayClass(float fMarks)
{
    if((fMarks <0.0f) || (fMarks > 100.00))           //filter function    
    {
     printf("Invalid input\n");
     printf("Please Enter the Marks in between the range 0 to 100");
     return;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.00f))
    {
        printf("Your are fail....");
    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        Printf(" You got pass Class...");
    }
    else if((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        Printf(" You got  Second class...");
    }
    else if((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        Printf(" You got First Class...");
    }
    else if((fMarks >= 75.00f) && (fMarks < 100.00f))
    {
        Printf(" You got First Class with Destinction...");
    }
    else 
    {
       printf("");
    }
}

int main()
{ 
    float fvalue = 0.0f;

    printf("Please Enter your Percentage : \n");
    scanf("%f", &fvalue);

    DisplayClass(fvalue);

    return 0;

}