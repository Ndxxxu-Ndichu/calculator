#include <stdio.h>
#include <math.h>


void displayMenu();

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double calculateLog(double num);


int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        printf("enter your choice (1-5):");
        scanf("%d", &choice);

        if (choice >=1 && choice <=4) {
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
        }

        switch (choice){
            case 1:
                result = add(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
        
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2lf\n", result); 
                break;
            case 4:
                if (num2 !=0) {
                    result = divide(num1, num2);
                    printf("Result: %.2lf\n", result);
                }else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if (num1 > 0) {
                    result = calculateLog(num1);
                    printf("Result (logarithm): %.2lf\n", result);
                } else {
                    printf("Error: Logarithm of non positive is not defined");
                }
            break;    
            case 6:
                printf("Exiting the calc, bye\n");
                break;                
            default:
                printf("Invalid choice!, try again");
                break;
            }
        printf("\n");
    } while (choice !=5);

return 0;
}

void displayMenu() {
    printf("=== simple calculator === \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit");    
}

double add(double a, double b) {
    return a+b;
}

double subtract(double a, double b) {
    return a-b;
}

double multiply (double a, double b) {
    return a * b;
}

double divide (double a, double b) {
    return a/b;
}

double calculateLog(double num) {
    return log(num);
}


