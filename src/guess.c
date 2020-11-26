#include <stdlib.h>
#include <stdio.h>

/*
 * Brady Lange
 * 4/16/18
 * File name: guess1.c
 * This program allows the user to guess a number between 1 and 10,000. The user can kill the program at any time.
 */
 
 //Main function
 int main()
 {
	 //Seeding the rand() function 
	 srand(9);
	 
	 //Variables
	 char input[5];
	 int charToInt = 0;
	 //Generating a random number as the key for the user to guess
	 int key = (rand() % (10000 + 1 - 0) + 0); //Maximum number + 1 - minimum number + minimum number
	 
	 //Looping until the user enters the correct number
	 while(key != charToInt)
	 {
		 printf("Guess a number between 1 and 10,000 until you're right.\n");
		 scanf("%s", input);
		 charToInt = atoi(input);
		 if(key != charToInt)
			 printf("Wrong number. Please guess again or use the command CTRL + C to quit.\n");
	 }
	 
	 //If the user enters the correct number this line will be executed
	 printf("Congratulations! You have guessed the correct number: %d\n", charToInt);
	 
	 return 0;
 }