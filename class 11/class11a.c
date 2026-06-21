#include <stdio.h>















int main() {
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("You haven't been born yet");

    }

    else if (age == 0)
    {
        printf("You are a newborn");

    }

    else if (age > 0 && age < 18) 
    {
        printf("You are a child");

    }

    else if (age >= 18 && age < 65)
    {
        printf("You are an adult");

    }

    else if(age >= 65) {
        printf("You are a senior");

    }

    return 0;
    
}