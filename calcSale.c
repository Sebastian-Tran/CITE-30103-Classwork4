#include <stdio.h>
#define DISCOUNT_RATE 0.10

void main(){
	float input;
	float DiscountAmount;
	float finalAmount;

	printf("Enter the price of an item to calculate price after discounts: \n");
	scanf("%f", &input);

	DiscountAmount = (input * DISCOUNT_RATE);
	finalAmount = input - DiscountAmount;
	printf("Discount Amount = %.2f\n",DiscountAmount);
	printf("Final price after discount = %.2f\n", finalAmount);

}
