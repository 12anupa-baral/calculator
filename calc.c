#include <stdio.h>

int sum(int num1, int num2) {
    return num1+num2;
}

int diff(int num1, int num2) {
    return num1-num2;   // for subtraction
}

int product(int num1, int num2) {
  return num1*num2 ; // for multiplication
}

int division(int num1, int num2) {
  return num1/num2;  // for division
}

int modulo_division(int num1, int num2) {
  return num1%num2;  // for modulo division
}


int main(void) {
    int num1 = 0, num2 = 0;
    printf("Enter two numbers: ");
    scanf(" %d %d" &num1, &num2);

    printf("The sum is %d.\n", sum(num1, num2));
    printf("The difference is %d.\n", diff(num1, num2));
    printf("The product is %d.\n", product(num1, num2));
    printf("The division gives %d output.\n", product(num1, num2));
    printf("The modulo division gives %d output.\n", product(num1, num2));
    
    return 0;
}