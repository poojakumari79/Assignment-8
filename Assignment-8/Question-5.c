/* 5. Write a program to draw the following patterns:
      *
     ***
    *****
   *******
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
            if(j>=4-i&&j<=4+i)                           
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


// from user input

/*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a column number which you can want pyramid pattern:");  // Enter any number you can observe the output only half of the given number
    scanf("%d",&n);
    for(i=0;i<=n/2;i++)                                          // i is n/2 because pyramid in shape
    {
        for(j=0;j<=n;j++)                                       // j not change its run n time 
            {
            if(j>=(n/2)-i&&j<=(n/2)+i)                             // condition change n/2 because j>=4-i&&j<=4+i in case of enter 9 number 
            {
                printf("*");                                      // i and j starts with 0   therefore one extra execute to given number 

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