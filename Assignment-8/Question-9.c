/* Write a program to draw the following patterns:

1234321
 12321
  121
   1

*/

#include<stdio.h>
int main()
{
    int i,j,c;                        // c used for print a number
    for(i=0;i<=3;i++)             // i and j are used because star print in matrices form
    {
        c=1;                      // after j loop end c intialize with 1
        for(j=0;j<=6-i;j++)           // max print 3+i
        {
            if(j>=i)                
            {
             printf("%d",c);
             if(j<3)
             c++;
             else 
             c--;
            
            }
            else{
                printf(" ");
            }
        }
        printf("\n");                    // after one row print then next line printed
    }
    return 0;
    }


