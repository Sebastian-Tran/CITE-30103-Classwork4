#include <stdio.h>

float inputTemp;

float toKelvin(float celsius);

void main(){
	printf("Enter a temperature in Celsius: \n");
	scanf("%f", &inputTemp);

	toKelvin(inputTemp);
}

float toKelvin(float celsius){
	float convertedTemp;
	convertedTemp = celsius + 273.15;
	printf("Temperature in Kelvin = %.4fK\n", convertedTemp);
	return convertedTemp;
}

