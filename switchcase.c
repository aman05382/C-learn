#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;

        default:
            printf("your marks are not 45");
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;

    default:
        printf("Age is not 3, 13 or 23\n");
    }

    return 0;
}

//another Example.......

#include <stdio.h>

int main()
{
    int week;
    printf("Enter week number (1-7):\n");
    scanf("%d", &week);

    switch (week)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thrusday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;
    }
}

//another Example.......

#include <stdio.h>

int main()
{
    int a;
    printf("Enter your lottery number\n");
    scanf("%d", &a);
    switch (a)
    {
    case 29:
        printf("\"Kudos\" You have won the lottery");
        break;

    case 49:
        printf("\"Kudos\" You have won the lottery");
        break;
    case 69:
        printf("\"Kudos\" You have won the lottery");
        break;

    default:
        printf("Better luck next time");
    }
    return 0;
}