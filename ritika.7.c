#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rev = 0, rem;
    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Reserved number = %d", rev);


    return 0;
}
