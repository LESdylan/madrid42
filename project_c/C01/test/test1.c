#include <stdio.h>
//add two numbers using pointers
void       test(int *a, int *b, int *sum)
{
    *sum = *a + *b;

}
int     main()
{
    int     a;
    int     b;
    int     sum;
    a = 1;
    b = 2;
    test(&a, &b, &sum);
    printf("The sum of the entered numbers is :  %d\n", sum);
    return (0);
}