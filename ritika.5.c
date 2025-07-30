#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    float a, b;
    printf("Menu:");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter Your Choice (1-4):");
    scanf("%d", &choice);

    printf("Enter Two Numbers:");
    scanf("%f %f", &a, &b);


    switch(choice){
    case 1:
           printf("Result = %.2f", a + b);
    case 2:
           printf("Result = %.2f", a - b);
    case 3:
           printf("Result = %.2f", a * b);
    case 4:
           if (b !=0)
               printf("Result = %.2f", a / b);
           else
               printf("Error: Division By Zero!");
           break;
    default:
           printf("Invalid choice.");
    }
    return 0;
}









