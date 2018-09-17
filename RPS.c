#include <stdio.h>

/* 
Author: Tathya Joshi
*/


/* The enum block for the computer's value */
enum botValue
{
	rock = 0, paper = 1, scissor = 2
};

/*

This program simulates the game "Rock Paper Scissors". This is a two player game with the user of the program being one player and the computer being the other.

*/

int main(void) 
{
	
	char botValue;	
	char userValue;
	int randomNumber;

	/* Introduction of the game */
	printf("Welcome, human!\n");
	printf("This is Rock, Paper and Scissors, a game played between the user and the computer.\n");
	printf("The idea is for each player to choose one of the three options: Rock, Paper or Scissor. The winner for the pairings of these three options is: Rock wins over Scissor, Paper wins over Rock, Rock wins over Scissor and tie if the options chose are identical. \n\n");
	printf("Valid inputs for the game:\n\nRock: r/R\nPaper: p/P\nScissor: s/S \nTo quit: q/Q \n\n");
	
	/* The while condition that stops the program when the user wants to quit */
	do 
	{
		
		/* Taking user's input values */
		printf("User, enter you value (Q to quit): ");
		userValue = getchar();
		
		getchar();

		/* Main code block to run the game */
		if(userValue !='Q' && userValue!= 'q') 
		{	
			/* Generating computer's values*/
			srand(time(0));
			randomNumber = rand() % 3;
			
			if(randomNumber == rock)
			{
				botValue = 'R';
			}
			else if(randomNumber == paper)
			{
				botValue = 'P';
			}
			else if(randomNumber == scissor)
			{
				botValue = 'S';
			}

			/* Displaying the values*/
			printf("\nYou chose: %c \n", userValue);
			printf("Computer chose: %c \n", botValue);
		
			/* Generating results from inputs*/
			switch(userValue) 
			{
				case 'r':
				case 'R':
				{
					if (botValue == 'R')
					{
						printf("Its a Tie!. \n");
						break;
					}
					if (botValue == 'P')
					{
						printf("Computer Wins!. \n");
						break;
					}
					if (botValue == 'S')
					{
						printf("You Win!. \n");
						break;
					}
				}

				case 'p':
				case 'P':
				{
					if (botValue == 'R')
					{
						printf("You Win!. \n");
						break;
					}
					if (botValue == 'P')
					{
						printf("Its a Tie!. \n");
						break;
					}
					if (botValue == 'S')
					{
						printf("Computer Wins!. \n");
						break;
					}
				}

				case 's':
				case 'S':
				{
					if (botValue == 'R')
					{
						printf("Conputer Wins!. \n");
						break;
					}
					if (botValue == 'P')
					{
						printf("You Win!. \n");
						break;
					}
					if (botValue == 'S')
					{
						printf("Its a Tie!. \n");
						break;
					}
				}
				
				/* Dealing with the invalid input from the user */
				default:
				{
					printf("Invalid input! Try again with valid input. \n");
					printf("Valid input:\n\nRock: r/R\nPaper: p/P\nScissor: s/S \nTo quit: q/Q \n\n");

				}	
			}		
		}
	}  while (userValue != 'q' && userValue != 'Q');
	
	printf("Goodbye! Thank you for playing! \n");
	return(0);

}
