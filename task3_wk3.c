 #include<stdio.h>
 
 int main() {
 	int choice;
 	//Display the menu
 	printf("---Mobile data bundle purchase---\n");
 	printf("Select data bundle\n");
 	printf("1.100 MB @t50\n");
 	printf("2.500 MB @t200\n");
 	printf("3.1 GB @t350\n");
 	printf("4.2 GB @t600\n");
 	
 	//Matches prompt line
 	printf("Enter your choice(1-4):");
 	scanf("%d", &choice);
 	
 	//Matches output format exactly
 	switch (choice){
 		case 1:printf("100MB-50KES\n");break;
 		case 2:printf("500MB-200KES\n");break;
 		case 3:printf("1GB-350KES\n");break;
 		case 4:printf("2GB-600KES\n");break;
 		default:printf("Invalid choice!\n");break;
 		
	 }
 	  return 0;
	 }
	 
	 
 