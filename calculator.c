#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;
    int done = 0;

    do {
        printf("\n===== Calculator Menu =====\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("===========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4){
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
        }

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if(num2 == 0)
                    printf("Error: Cannot divide by zero.\n");
                else{
                    result = num1/num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                printf("Goodbye!\n");
                done = 1;
                break;
            default:
                printf("Invalid choice, try again\n");
        }

    } while (done == 0);

    return 0;
}
