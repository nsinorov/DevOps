#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    do {
        printf("\n=== SIMPLE CALCULATOR ===\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulo (%%)\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }

        switch (choice) {
            case 1:
                printf("Result: %.2lf\n", num1 + num2);
                break;

            case 2:
                printf("Result: %.2lf\n", num1 - num2);
                break;

            case 3:
                printf("Result: %.2lf\n", num1 * num2);
                break;

            case 4:
                if (num2 != 0)
                    printf("Result: %.2lf\n", num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;

            case 5:
                if ((int)num2 != 0)
                    printf("Result: %d\n", (int)num1 % (int)num2);
                else
                    printf("Error: Modulo by zero!\n");
                break;

            case 0:
                printf("Exiting calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
// Simple calculator program in C
// Supports addition, subtraction, multiplication, division, and modulo operations
// Continuously prompts user until they choose to exit
// Handles division and modulo by zero errors
