#include <stdio.h>

void changeValue(int *address)
{
    *address = 37565;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}

// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

int add(int *x, int *y)
{

    int p, M, N;

    p = *x;
    *x = *y;
    *y = p;
    M = *x + *y;
    N = *y - *x;
    printf("Addition Of Two Numbers is %d\n", M);
    printf("Subtraction Of Two Numbers is %d\n", N);

    return 0;
}

int main()

{
    int a = 45, b = 35;

    printf("The old values of a and b are %d,%d\n", a, b);
    add(&a, &b);
    printf("The New Values of A and B are %d,%d", a, b);

    return 0;
}