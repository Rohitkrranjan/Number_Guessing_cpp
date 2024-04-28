#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int random , guess;
	int count = 0;
	srand(time(NULL));
	printf("Welcome to the world of Number guessing \n ");
	   random = rand() % 100 + 1 ;// Generating between 1 to 100 
	  
	  
	do{
		printf("\n Please enter guess number between(1 to 100) ");
		scanf("%d",&guess);
		count++;
		
		if(guess < random){
			printf("Please guess a larger number \n");
		}
		else if(guess > random){
			printf("Please guess a smaller number \n");
		}
		else
		{
			printf("Congratulations  !!! you have successfully guessed the numbetr ! in %d attempts",count);
		}
	}
	while(guess != random);
	{
		printf("Bye Bye Thanks for playing this game : ");
		printf("Developed by : Rohit Kumar Ranjan")
		
	}
	
	
	return 0;
	
	
}
