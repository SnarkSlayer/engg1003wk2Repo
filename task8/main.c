#include <stdio.h>
#include <stdlib.h>

int a, b, ans;

int adding() {
    int c = a + b;

    printf("What is %d + %d? ", a, b);
    scanf("%d", &ans);

    if(ans == c) {
        printf("Correct!");
    } else {
        printf("Wrong :( \n The correct answer is %d", c);
    }
}
int subbing() {
    int c = a - b;

    printf("What is %d - %d? ", a, b);
    scanf("%d", &ans);

    if(ans == c) {
        printf("Correct!");
    } else {
        printf("Wrong :( \n The correct answer is %d", c);
    }
}
int multing() {
    int c = a * b;

    printf("What is %d x %d? ", a, b);
    scanf("%d", &ans);

    if(ans == c) {
        printf("Correct!");
    } else {
        printf("Wrong :( \n The correct answer is %d", c);
    }
}
int divising() {
    if(b == 0) {
        b = 1;
    }
    int c = a / b;
    int d = a % b;

    printf("What is %d / %d? ('quotient' then 'remainder') ", a, b);
    scanf("%d", &ans);
    int ans1;
    scanf("%d", &ans1);

    if(ans == c && ans1 == d) {
        printf("Correct!");
    } else {
        printf("Wrong :( \n The correct answer is %d r %d", c, d);
    }
}

int main()
{
    int max;
    printf("Enter max: ");
    scanf("%d", &max);
    a = rand() % max + 1;
    b = rand() % max + 1;

    int choice;
    printf("Select your choice:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n\n");
    scanf("%d", &choice);

    switch (choice) {
    case(1):
        adding();
        break;
    case(2):
        subbing();
        break;
    case(3):
        multing();
        break;
    case(4):
        divising();
        break;
    default:
        printf("Invalid input");
        break;
    }

    return 0;
}
