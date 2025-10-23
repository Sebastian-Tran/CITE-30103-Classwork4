#include <stdio.h>
#include <math.h>

void main(){

	double input;
	double answer;
	printf("Enter a number to calculate the square root of that number: ");
	scanf("%lf",&input);
	answer = sqrt(input);
	printf("The square root of %lf is %lf\n", input, answer);

}
