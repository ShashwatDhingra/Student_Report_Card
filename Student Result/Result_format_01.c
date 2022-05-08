#include<stdio.h>
int main()
{
    int n;
    printf("Enter Total Students : ");
    scanf("%d", &n);
    int result[n][5], i, j;

    char name[n][10];

     for(int i=0; i<n; i++)
    {

        printf("Enter the Name of Student : ");
        scanf("%s", &name[i]);

        for(int j=0; j<5; j++)
        {
            
            printf("Enter Marks of %s for Subject %d : ",name , j+1);
            scanf("%d", &result[i][j]);
        }
    }

    for(int a = 0; a<=7; a++)
    {
        printf("\n");

    }
    


    printf("\t \t \t \t \t -----Result Of Student -----\n");

    for(int i=0; i<n; i++)
    {
        
        printf("Reault of %s\n", name[i]);
        printf("\t \t******\n");

        for(int j=0; j<5; j++)
        {
            printf("Subject [%d] = %d\n", j+1, result[i][j]);
            
        }

        printf("\n");
    }
    
    return 0;
}

