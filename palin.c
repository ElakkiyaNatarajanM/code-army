#include <stdio.h>
int main()
{
    int n, rev int = 0, remainder, org int;

    printf("Enter an integer: ");
    scanf("%d", &n);

    org int = n;

    while( n!=0 )
    {
        rem = n%10;
        rev int = rev int*10 + rem;
        n /= 10;
    }

    if (org int == rev int)
        printf("%d is a palindrome.", org int);
    else
        printf("%d is not a palindrome.", org int);
    
    return 0;
}
