/* 4.Write a program to draw the following patterns:
*****
 ****
  ***
   **
    * 
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)             // i and j are used because star print in matrices form
    {
        for(j=0;j<=4;j++)
        {
            if(j>=i && j<=4)
            {              
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");                    // after one row print then next line printed
    }

    return 0;

    }



// from user input
/*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter row number you can want pattern :  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)             // i and j are used because star print in matrices form
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i && j<=n)
            {              
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");                    // after one row print then next line printed
    }

    return 0;

    }

*/