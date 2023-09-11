/* Write a program to draw the following patterns:

**********
****  ****
***    ***
**      **
*        *

*/


#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=9;j++)
        {
            if((j<=4-i)||(j>=5+i))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}


/* ANOTHER METHOD TO SOLVE IT
      In this method two loops are used so we can say more time complexity

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)                                  
    {
        for(j=0;j<=4;j++)                                      
            {
            if(j>=0&&j<=4-i)                           
            {
                printf("*");                                     
            }
            else
            {
                printf(" ");
            }
        }
         for(j=5;j<=9;j++)                                      
            {
            if(j>=5+i&&j<=9)                           
            {
                printf("*");                                     
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

*/