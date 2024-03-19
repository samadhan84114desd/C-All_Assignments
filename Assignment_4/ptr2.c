/*Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter.*/

#include <stdio.h>

int add(int num1, int num2, int *result) {
    *result = num1 + num2;
}

int subtract(int num1, int num2, int *result) {
    *result = num1 - num2;
}

int multiply(int num1, int num2, int *result) {
    *result = num1 * num2;
}

int divide(int num1, int num2, float *result) {
    if (num2 == 0) {
        return -1;
    }
    *result = (float)num1 / num2;
}

int main() {
    int num1, num2, operation;
    scanf("%d %d", &num1, &num2);

    scanf("%d", &operation);

    int result;
    float div_result;
    int error = 0;

    switch (operation) {
        case 1:
            error = add(num1, num2, &result);
            break;
        case 2:
            error = subtract(num1, num2, &result);
            break;
        case 3:
            error = multiply(num1, num2, &result);
            break;
        case 4:
            error = divide(num1, num2, &div_result);
            break;
        default:
            return 1;
    }

    if (error == 0) {
        if (operation == 4) {
            printf("%.2f\n", div_result);
        } else {
            printf("%d\n", result);
        }
    } else {
        printf("Error\n");
    }

    return 0;
}

