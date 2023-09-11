/* Write a program to draw the following patterns:

1234321
123 321
12   21
1     1

*/

#include<stdio.h>
int main()
{
    int i,j,n;
    for(i=0;i<=3;i++)
    {
        n=1;
        for(j=0;j<=6;j++)
        {
            if(j>=0&&j<=3-i)
             printf("%d",n++);
            
             else if(j>=3+i&&j<=6)
               printf("%d",--n);
              
              else  
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}