#include <stdio.h>

//Aks the user for 3 integers
//Use scanf("%i", varname);
//Print out the sum of all 3 variables

int main() {
	int x, y, z;
	printf("Enter first number: ");
	scanf("%i", &x);
	printf("Enter second number: ");
	scanf("%i", &y);
	printf("Enter third number: ");
	scanf("%i", &z);
	printf("The sum of your numbers is: %i\n", x+y+z);
	return 0;
}
