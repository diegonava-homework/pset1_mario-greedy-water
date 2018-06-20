#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
/* Declaring Variables*/
  float change;
  float quarter = 25;
  float dime = 10;
  float nickel = 5;
  float penny = 1;
  int money_count = 0;
 
 /* Validate user input*/
    do {
    
  printf("O hai! How much change is owed?: \n");
  change = get_float();
       }
    while (change <= 0);

/* Dollars to cents conversion (missing round)*/
  float cents = round(change * 100);
  
/* While loop execution*/
  while (cents >= quarter) {
    cents = cents - quarter;
    money_count++;
  }

        while (cents >= dime) {
          cents = cents - dime;
          money_count++;
        }
                              
           while (cents >= nickel) {
             cents = cents - nickel;
             money_count++;
           }
           
               while (cents >= penny) {
                  cents = cents - penny;
                  money_count++;
               }    


/* Print number of coins */
  printf("%i\n", money_count);
}