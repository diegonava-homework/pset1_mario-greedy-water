#include <stdio.h>
#include <cs50.h>

int main(void)
{

/* Declaring Variables*/
int height;
int row;
int hash;
int space;
  
/* Validate user input*/
  do {
    
  printf("Height: ");
  height = get_float();
       }
    
    while (height < 0 || height > 23);

/*ROWS Loop
This condition handles how many rows will be on the pyramid
It needs to be true in order to keep applying the next "for loops that are contained inside it"*/
for (row = 1; row <= height; row++) {
 
    /*SPACES Loop
    This conditions handles how many spaces are print per line*/
    for(space = height - row; space > 0; space--) {
        printf(" ");
    }
    
    /*HASHES Loop
    This condition handles how many hashes are print per line*/
    for(hash = row + 1; hash > 0; hash--) {
        printf("#");
    }

/*Print new line in order to make the next row*/
printf("\n");
}
}



/*
PSEUDOCODE
To-do
1. Prompt and validate the user input (do while with condition with &&)
  - Non-negative integer & no greater than 23 - pyramid heights must be between 0 and 23
  - Use CS50 Library

2. Generate the desired half-pyramid (for loop)
  - Take care to align the bottom-left corner of your half-pyramid with the left-hand edge of your terminal window
  - We need our pyramid right aligned
  - Remember the counting start from 0
  - For every row (find a pattern https://youtu.be/EGWRG5e1O2s?t=324):
      - print spaces
      - print hashes
      - print a new line
  
  
  Expected Output
$ ./mario
Height: 5
    ##
   ###
  ####
 #####
######

$ ./mario
Height: 3
  ##
 ###
####


    Hints
Try to establish a relationship between 
(a) the height the user would like the pyramid to be
(b) what row is currently being printed
(c) how many spaces and how many hashes are in that row
"FOR" EVERY ROW
Once you establish the formula, you can translate that to code

Testing
check50 2016.mario.less mario.c
*/