#include<stdio.h>
// program to count number of digits
int main()
{
    int p,n=0;
    printf("Enter the number: \n");
    scanf("%d",&p);

// ***************************************
// Driver code
    while(p=p/10) n++;
// Driver code ends 
// ***************************************

    printf("\nNumber of digits=%d",n+1);
    return 0;
}