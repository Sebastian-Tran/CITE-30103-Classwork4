#include <stdio.h>

void main(){
	float a;
	float b;
	float sum;
	float product;

	printf("Enter your first floating point number: \n");
	scanf("%f",&a);

	printf("Enter your second floating point number: \n");
	scanf("%f",&b);

	sum = a + b;
	product = a * b;

	printf("The sum of %f and %f is: %.2f\n", a, b, sum);
	printf("The product of %f and %f is: %.3f\n", a, b, product);
}
