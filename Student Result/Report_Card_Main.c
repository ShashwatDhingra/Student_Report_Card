#include<stdio.h>
int result(int * marks, char * name, int roll_num, int total);  // Function Prototype
int pass_or_fail(int grade);
int compartment(int * marks);
int main()
{
    /* Variable Declaration */
    char name[10], sub_name[4][10] = {{"English"}, {"Maths  "}, {"Science"}, {"Sst    "}};

    int total = 0;

    int i, j, marks[4], roll_num;

    /* Program Start */

    printf("\n \n ");

    printf("\t \t \t \t ---Welcome To Result Maker Program---\n");


    // Input Name Of Student

    printf("Enter Name of Student : ");
    scanf("%s", &name);

    // Input Roll Number of Student 

    printf("Enter Roll Number : ");
    scanf("%d", &roll_num);

    // Loop for Take Marks of All Subjects

    for(i=0; i<4; i++)
    {
        printf("Enter the Marks in %s : ", sub_name[i]);
        scanf("%d", &marks[i]);

        if(marks[i] < 0 || marks[i] >= 100)
        {
             printf("Enter Correct Marks in %s : ", sub_name[i]);
             scanf("%d", &marks[i]);
        }

        
    }

    // Loop for Adding All Marks

    for(i=0; i<4; i++)
    {
        total = total + marks[i];
    }


    //  Providing Lines for Clearity
    for(int i=0; i<10; i++)
    {
        printf("\n");
    }
    // Result sheet

    result(marks, name, roll_num, total);  // Funciton Call

    return 0;
}

// Function Definition

// Main Output 


int result(int * marks, char * name, int roll_num, int total)
{

    /* Variable Declaration */
    
    int grade;
    char sub_name[4][10] = {{"English"}, {"Maths  "}, {"Science"}, {"Sst    "}};

    // Sheet Start

    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("\t \t \t \t \t \t   ---ABC Public School---\n");
    printf("\t \t \t \t \t \t     Examinaition Result\n", name);
    printf("\n");
    printf("Name : %s \t \t \t \t \t \t \t \t \t \t  \t \t Roll Number : %d\n \n", name, roll_num);

    // Marks for all Subject

    printf("Subject \t \t \t Marks\n \n");
    
    for(int i=0; i<4; i++)
    {   if(marks[i]>=33)
        {
        printf("%s \t \t :\t   %d\n\n", sub_name[i], marks[i]);
        }
        if(marks[i]<33)
        {
            printf("%s \t \t :\t   %d \t *Fail\n\n", sub_name[i], marks[i]);
        }
    }

    printf("\n");

    printf("************************************************\n");
    
    // Conclusion Of Result

    printf("\t      Obtained %d out of 400\n", total);

    printf("\n");


    // Grading

    if(total >=300 && total <= 400)
    {
        grade = 'A';
        printf("GRADE : %c ", grade);
    }

    else if(total >=200 && total <= 300)
    {
        grade = 'B';
        printf("GRADE : %c ", grade);
    }
    else if(total >=100 && total <= 200)
    {
        grade = 'C';
        printf("GRADE : %c ", grade);
    }
    else if(total < 100 && total >= 0)
    {
        grade = 'D';
        printf("GRADE : %c  ", grade);
    }


    // Pass/ Fail

    pass_or_fail(grade);

    printf("\n");

    compartment(marks);

    printf("-----------------------------------------------------------------------------------------------------------------------------------------");

    printf("\n \n \n ");
}




int pass_or_fail(int grade)  // Function Definition
{
    if(grade  == 'A')
    {
        printf("\t \t \t    Result : PASS");
    }

    else if(grade == 'B')
    {
        printf(" \t \t \t    Result : PASS");
    }

    else if(grade  == 'C')
    {
        printf("\t \t \t    Result : PASS");
    }

    else if (grade  == 'D')
    {
        printf("\t \t \t    Result : FAIL");
    }
}

int compartment(int * marks)
{
    if(marks[0]<33)
    {
        printf("Compartment in English\n");
    }
    if(marks[1]<33)
    {
        printf("Compartment in Maths\n");
    }
    if(marks[2]<33)
    {
        printf("Compartment in Science\n");
    }
    if(marks[3]<33)
    {
        printf("Compartment in Sst\n");
    }
}
