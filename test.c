#include <stdio.h>

int main(void)
{
    double first, second;
    char operator;

    printf("Enter an expression (for example, 12 + 3): ");
    if (scanf("%lf %c %lf", &first, &operator, &second) != 3) {
        fprintf(stderr, "Invalid input. Enter two numbers and an operator.\n");
        return 1;
    }

    switch (operator) {
    case '+':
        printf("%g\n", first + second);
        break;
    case '-':
        printf("%g\n", first - second);
        break;
    case '*':
        printf("%g\n", first * second);
        break;
    case '/':
        if (second == 0.0) {
            fprintf(stderr, "Error: cannot divide by zero.\n");
            return 1;
        }
        printf("%g\n", first / second);
        break;
    default:
        fprintf(stderr, "Unsupported operator. Use +, -, *, or /.\n");
        return 1;
    }

    return 0;
}