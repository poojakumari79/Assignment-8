/*  Write a program to draw the following patterns:
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A  

*/

#include<stdio.h>
int main()
{
    int i,j;
    char c;
    for(i=0;i<=6;i++)
    {
        c='A';
        for(j=0;j<=12;j++)
        {
            if(j>=0&&j<=6-i)
             printf("%c",c++);
            
             else if(j>=6+i&&j<=12)
               printf("%c",--c);
              
              else  
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
