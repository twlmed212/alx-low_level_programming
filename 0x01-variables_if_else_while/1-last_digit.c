#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int x;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number and store it in n
    n = rand() - RAND_MAX / 2;

    // Calculate the last digit of n
    x = n % 10;

    // Print the last digit of n
    printf("Last digit of %d is %d ", n, x);

    // Check if x is greater than 5
    if (x > 5)
    {
        printf("and is greater than 5");
    }

    // Check if x is 0
    if (x == 0)
    {
        printf("and is 0");
    }

    // Check if x is less than 6 and not 0
    if (x < 6 && x != 0)
    {
        printf("and is less than 6 and not 0");
    }

    printf("\n");

    return (0);
}
