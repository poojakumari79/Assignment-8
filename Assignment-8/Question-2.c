/* 2. Write a program to draw the following patterns:
     *
    **
   ***
  ****
 *****

*/


#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)             // i and j are used because star print in matrices form
    {
        for(j=0;j<=4;j++)
        {
            if(j>=4-i)
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
