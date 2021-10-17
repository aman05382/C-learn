#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("You can vote!");
    }

    else if (age >= 10)
    {
        printf("You are between 10 to 18 and you can vote for kids");
    }

    else if (age >= 3)
    {
        printf("You are between 3 to 10 and you can vote for babies");
    }

    else
    {
        printf("You cannot vote!");
    }

    return 0;
}

// exercise 1 (QUIZ)

// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them

main()
{
    int Maths;
    int Science;
    printf("How much marks did you score in maths(passing marks is 10 out of 40)");
    scanf("%d", &Maths);
    printf("How much marks did you score in science(passing marks is 10 out of 40)");
    scanf("%d", &Science);
    if (Maths >= 10 && Science >= 10)
    {
        printf("You earned 45 Rupees");
    }
    else if (Science >= 10)
    {
        printf("You earned 15 Rupees");
    }
    else if (Maths >= 10)
    {
        printf("You earned 15 Rupees");
    }
}