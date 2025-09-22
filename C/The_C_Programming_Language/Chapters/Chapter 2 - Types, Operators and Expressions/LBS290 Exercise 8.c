// This program will prompt for 5 floating point numbers. The program will print out the total of the five numbers and also print out the average.

#include <stdio.h>

int main() { 
    float num1, num2, num3, num4, num5;
    float total;
    float average;
  
    printf("Enter five floating-point numbers:\n");
  
    printf("Enter number 1: ");
    scanf("%f", &num1);
  
    printf("Enter number 2: ");
    scanf("%f", &num2);
  
    printf("Enter number 3: ");
    scanf("%f", &num3);
  
    printf("Enter number 4: ");
    scanf("%f", &num4);
  
    printf("Enter number 5: ");
    scanf("%f", &num5);
  
    total = num1 + num2 + num3 + num4 + num5; 
    average = total / 5.0;
    printf("The total is: %.1f\n", total);
    printf("The average is: %.1f\n", average);
    return 0;
}