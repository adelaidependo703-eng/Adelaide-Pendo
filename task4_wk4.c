#include <stdio.h>
int main() {
	int password;
	
	//do-while loop ensures the prompt runs AT LEAST ONCE
	do{
		printf("Enter password:");
		scanf("%d",&password);
		
		if(password!=1234){
			printf("Incorrect password!Try again.\n\n");
		}
	}while (password !=1234);
	
	//displays once the correct password (1234) is entered
	printf("nAccess Granted\n");
	
	return 0;
}