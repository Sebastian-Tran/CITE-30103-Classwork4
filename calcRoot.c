#include <stdio.h>
#include <math.h>

int a;
int b;
int c;
double answer;

double calculateRoot(int a, int b, int c);

void main(){
	printf("Enter three coefficients of a quadratic equation: ax^2 + bx + c = 0)\n");
	printf("Enter your first coefficient: \n");
	scanf("%d",&a);

	printf("Enter your second coefficient: \n");
	scanf("%d", &b);

	printf("Enter your third coefficient: \n");
	scanf("%d", &c);
	
	answer = calculateRoot(a,b,c);
	printf("Your root is %lf\n", answer);
}

double calculateRoot(int a, int b, int c){
	double root;
	
	root = (-b + sqrt((b^2) - (4 * a )* c)) / (2 * a);
	return root;
}
