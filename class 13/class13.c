#include <stdio.h>

int main() {
    char choice = '\0';
    float farhenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Calculator\n");
    printf("1. Celsius to Farhenheit\n");
    printf("2. Farhenheit to Celsius\n");
    printf("Is the temp in Celcius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        
        farhenheit = (celsius * 9 / 5) + 32;
        
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, farhenheit);

    } else if (choice == 'F' || choice == 'f') {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &farhenheit);
        
        celsius = (farhenheit - 32) * 5 / 9;
        
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", farhenheit, celsius);

    } else {
        printf("Invalid choice! Please select C or F\n");

    }

    return 0;
    
}