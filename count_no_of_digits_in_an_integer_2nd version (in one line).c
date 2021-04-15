#include<stdio.h>
// count number of digits in the integer.
// here we are printing the integer also.
int main()
{   int n;
    scanf("%d",&n);
    printf("%d",printf("\n%d-",n)-2); 
    //printf returns a value=number of characters/integers it is printing
    //Here \n and - are extra characters .So we are subtracting 2 to get the correct result.
    return 0;
}
