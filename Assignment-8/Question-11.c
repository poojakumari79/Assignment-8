/* Write a program to draw the following patterns:

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA    

*/

#include<stdio.h>
int main()
{
    int i,j;
    char c;
    for(i=0;i<=4;i++)
    {    
        c='A';
        for(j=0;j<=8;j++)
        { 
           if(j>=4-i&&j<=4+i)
           {
            printf("%c",c);
            j<4?c++:c--;                  // j<4 means phle print krega uske baad decrement and increment krega 
           }
           
           else
           printf(" ");
        }
        printf("\n");
    }
    return 0;
}