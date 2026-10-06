 #include <stdio.h>
 int main() {
 	float units, totalbill=0.0;
 	
 	//prompt user for input
 	printf("Enter water units consumed:");
 	scanf("%f", &units); 
 	
 	//calucalate bill using tiered consumption
 	if (units<=30) {
 		totalbill=units*20;
	 }
	 else if(units<=60){
	 	totalbill=(30*20) + ((units-30) *25);
	 }
	 else{
	 	totalbill=(30*20) + (30*25) +((units-60)*30);
	 }
	 //Display total bill formatted to two decimal places
	 printf("Total water bill:%.2f KES\n", totalbill);
	 
	 return 0;
 }