#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: ");
    int shower = GetInt();
    printf("bottles: %i\n", shower*12);
}