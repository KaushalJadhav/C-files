// Factorial of a number using single line
#include<stdio.h>
int main()
{  
    int n,f=1;
    scanf("%d",&n);
    if(n<0) { printf("\nInvalid input.");return 0;}

// ****************************************************
// Driver code
    while((n>0)&&(f=n--*f));
// Driver code ends 
// ****************************************************

    printf("\nFactorial=%d",f);
    return 0;
}
