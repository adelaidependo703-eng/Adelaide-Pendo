 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 int main(){
 	int secret_number, guess=0, attempts=0;
 	
 	//Seed the random number generatorusing current time
 	srand(time(0));
 	
 	//Generate random number between 1 and 20(inclusive)
 	secret_number =(rand()) % 20 + 1;
 	
 	printf("---Number guessing game---\n");
 	printf("Guess a number between 1 and 20:\n\n");
 	
 	//Loop until the user's guess matches the secret number
 	while(guess!=secret_number){
 		printf("Enter your guess:");
 		scanf("%d", &guess);
 		attempts++;
 		
 		if(guess>secret_number){
 			printf("Too high!\n\n");
		 }else if(guess<secret_number){
		 	printf("Too low!\n\n");
		 }else{
		 	printf("Congratulations!\n");
		 	printf("It took you %d attempts to guess correctly.\n", attempts);
		 }
	 }
	 return 0;
 }