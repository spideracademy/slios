#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cash;

    printf("Enter cash owned by the costomer - ");
    scanf("%i", &cash);

    if (cash <0)
    {
        printf("Invalid Input\n");
        exit(0);
        
    }

    return cash;
}

int calculate_quarters(int cents)
{
    
    int i =0;

    while (25<=cents)
    {
    i++;
    cents-=25;
    }

    return i;
}

int calculate_dimes(int cents)
{
    int i =0;

    while (10<=cents)
    {
    i++;
    cents-=10;
    }
    return i;
}

int calculate_nickels(int cents)
{
    int i =0;

    while (5<=cents)
    {
    i++;
    cents-=5;
    }

    return i;
}

int calculate_pennies(int cents)
{
    int i =0;

    while (1<=cents)
    {
    i++;
    cents-=1;
    }

    return i;
}
