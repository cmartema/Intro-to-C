#include <stdio.h>
#include <stdlib.h>

int main() {

	// initiate input and array for binary conversion
	int input; 
	int bin[32];

	//putc('1', stdout); 
	
	//take in input 
	printf("Enter an integer : ");
	scanf("%d", &input); 
	printf("\n"); 

	//print signed and unsigned decimal and hex using printf
	printf("signed decimal   : %d\n", input);
	printf("unsigned decimal : %u\n", input);
	printf("hexadecimal      : %x\n", input);

	//convert var input to binary 
	int index = 31; 

	while(index >= 0){
		
		bin[index] = input & 1;
		index--; 
		input >>= 1; 
	}

	//print with putc and for loop 
	printf("binary           : ");

	for(int i = 0; i < 31; i++){
		putc('%c', bin[i], stdout); 
		//printf("%d", bin[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}
