 #include <stdio.h>
 
 int main() {
 	float balance, amount;
 	
 	printf("Enter initial account balance:");
 	scanf("%f", &balance);
 	
 	//loop continues as balance is greater than 0
 	while(balance>0){
 		printf("\Current balance: $%.2f\n",balance);
 		printf("Enter amount to withdraw:");
 		scanf("%f", &amount);
 		
 		balance-= amount;
 		printf("Balance after withdrawal: $%.2f\n", balance);
	 }
	 printf("\nAmount balance is $%.2f",balance);
	 return 0;
 }