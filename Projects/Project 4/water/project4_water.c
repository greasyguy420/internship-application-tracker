#include <stdio.h>
#include <math.h>
/* Name: Joshua Smith
 * Summary: This program calculates if there might be a water leak by comparing the past
 * ten months of water usage and comparing it with this month's water usage.
*/

double average(double *usage, int n);
double standard_deviation(double *usage, double avg, int n);
void input_to_array(double usage[], int n);

//It takes the inputted water usage from the past ten months and updates an array.
void input_to_array(double usage[], int n){
	int i;
	printf("Enter water usage for the last %d months: ", n);
	for(i=0;i<10;i++){
		scanf("%lf", &usage[i]);
}
}
//This function calculates the average from the past ten months of water usage.
double average(double *usage, int n){
	double sum = 0.0;
	double *p;
	for(p = usage;p < usage + n; p++){
		sum += *p;
	}
	return sum / n;
}

//This function calculates the standard deviation from the past ten months of water usage.
double standard_deviation(double *usage, double avg, int n){
	double sum = 0.0;
	double *p;
	for(p = &usage[0]; p < &usage[n]; p++){sum += pow((*p - avg), 2);}
	return sqrt(sum / (n-1));
}
int main(){
	//Initializes the variables.
	int current_month;
	double usage[10];
	//The user inputs the water usage for this month (in unit of 1000 gallons)
	printf("Enter water usage for this month: ");
	scanf("%d", &current_month);
	//This calls the function to prompt the user to input the past ten months of water usage.
	input_to_array(usage, 10);
	double avg = average(usage, 10);
	double std_dev = standard_deviation(usage, avg, 10);
	//This determines if the current month's water usage is an outlier or not. Then tells the user if the usage is unusual.
	if(current_month > (avg + (2 * std_dev)))
		printf("Unusual usage.\n");
	else
		printf("Normal usage.\n");
	return 0;
}
