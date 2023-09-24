#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float num1, num2, result;

    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Logarithm\n");
    printf("7. Exit\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers:\n");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("The sum is: %f\n", result);
            break;
        case 2:
            printf("Enter two numbers:\n");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("The difference is: %f\n", result);
            break;
        case 3:
            printf("Enter two numbers:\n");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("The product is: %f\n", result);
            break;
        case 4:
            printf("Enter two numbers:\n");
            scanf("%f %f", &num1, &num2);
            result = num1 / num2;
            printf("The quotient is: %f\n", result);
            break;
        case 5:
            printf("Enter the base number:\n");
            scanf("%f", &num1);
            printf("Enter the power:\n");
            scanf("%f", &num2);
            result = pow(num1, num2);
            printf("%f to the power of %f is: %f\n", num1, num2, result);
            break;
        case 6:
            printf("Enter the number:\n");
            scanf("%f", &num1);
            result = log(num1);
            printf("The natural logarithm of %f is: %f\n", num1, result);
            break;
        case 7:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
