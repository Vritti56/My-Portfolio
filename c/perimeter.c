#include <stdio.h>

//Ask the user for 3 integers
//Use scanf("%i", varname);
//Print out the sum of all 3 variables

int main() {
	int x, y;
	printf("Enter length: ");
	scanf("%i", &x);
	printf("Enter width: ");
	scanf("%i", &y);
	int z = x+x+y+y;
	printf("The perimeter is: %i\n", z);
	return 0;
}
