// You manage a travel agency you want to input their following details
//             1.Name
//             2.Driving licence
//             3.Route
//             4.Kms
// Your program should be taken n as input and Driver input their detais one by one.

#include <stdio.h>
#include <string.h>

struct travelers
{
    char name[45];
    char drivinglicense[46];
    char Route[47];
    int kms;
};
int main()
{
    struct travelers d1, d2, d3;
    printf("==========================>We are collecting information of drivers<==========================\n");
    printf("\n                               Enter the first driver details\n");
    printf("Enter Your name:");
    scanf("%s", &d1.name);

    printf("Enter Your Drivinglicense:");
    scanf("%s", &d1.name);

    printf("Enter Your route:");
    scanf("%s", &d1.name);

    printf("Enter Your Killometers:");
    scanf("%d", &d1.name);

    printf("Your name is: %s\n", d1.name);
    printf("Your Drivinglicense is: %s\n", d1.name);
    printf("Your Route is: %s\n", d1.name);
    printf("You have drived %d killometers\n", d1.name);

    printf("\n                               Enter the Second driver details\n");
    printf("Enter Your name:");
    scanf("%s", &d2.name);

    printf("Enter Your Drivinglicense:");
    scanf("%s", &d2.name);

    printf("Enter Your route:");
    scanf("%s", &d2.name);

    printf("Enter Your Killometers:");
    scanf("%d", &d2.name);

    printf("Your name is: %s\n", d2.name);
    printf("Your Drivinglicense is: %s\n", d2.name);
    printf("Your Route is: %s\n", d2.name);
    printf("You have drived %d killometers\n", d2.name);

    printf("\n                               Enter the Third driver details\n");
    printf("Enter Your name:");
    scanf("%s", &d3.name);

    printf("Enter Your Drivinglicense:");
    scanf("%s", &d3.name);

    printf("Enter Your route:");
    scanf("%s", &d3.name);

    printf("Enter Your Killometers:");
    scanf("%d", &d3.name);

    printf("Your name is: %s\n", d3.name);
    printf("Your Drivinglicense is: %s\n", d3.name);
    printf("Your Route is: %s\n", d3.name);
    printf("You have drived %d killometers\n", d3.name);

    return 0;
}