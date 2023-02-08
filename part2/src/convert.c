#include <stdio.h>
#include <stdlib.h>

int main() {

	int input; 
	printf("Enter an integer : ");
	scanf("%d", &input); 
	printf("\n"); 

	// convert var input to binary
	
	printf("signed decimal   : %d\n", input);
	printf("unsigned decimal : %u\n", (unsigned int)input);
	printf("hexadecimal      : %x\n", input);
	//printf("binary           : ");
	//putc('1', stdout); //this will put the binary answer to stdout
	
	return EXIT_SUCCESS;
}
