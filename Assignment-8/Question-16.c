/* write a program to solve it pattern 
          
          *
         * *
        *   *
       *     *
      ********* 

*/


#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=8;j++)
        {
            if(j==4-i||j==4+i||i==4)      // i=4 all star print
            printf("*");
            else
            printf(" ");

        }
        printf("\n");
    }
    return 0;

}