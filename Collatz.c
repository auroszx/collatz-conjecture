//Definitions
#include <stdio.h>
#include <string.h>

//Constants


//Variables
int input = 0;
char sequence[600];	//Just in case, because there are no dynamic arrays here.
char temp[4];

//Main source code
main() {
	printf("Please input a number to check the Collatz Conjecture: ");
	scanf("%d", &input);
	while (input != 1) {
		char temp[4] = "";
		sprintf(temp, "%d", input);	//Transforms int to string. Easier in JS :/
		strcat(sequence, temp);		//Add number before operations.
		strcat(sequence, ", ");		//Adds a , for style.
		switch(input % 2) {
			case 1:				//Odd numbers
				input *= 3;
				input += 1;
				break;
			case 0:				//Even numbers
				input /= 2;
				break;
			default:
				break;
		}
	}
	sprintf(temp, "%d", input);
	strcat(sequence, temp);		//Add number after operations.
	printf("Finished. Here's the sequence: %s\n", sequence);
}
