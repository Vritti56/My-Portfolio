#include <stdio.h>

//Ask the user for 3 integers
//Use scanf("%i", varname);
//Print out the sum of all 3 variables

int main() {
	int x, y;
	printf("Enter length: ");
	scanf("%i", &x);

	if ( x <= 0)
	{
		printf("Length can't be negative\n")
			return 0;
	}

	printf("Enter width: ");
	scanf("%i", &y);
	 
	if ( y <=0){
	{
		printf("Width can't be negative\n";
				return 0;
	}

	int z = x*y;
	printf("The area is: %i\n", z);
	return 0;
}
