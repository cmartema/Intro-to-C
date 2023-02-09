#include <stdio.h>
#include <stdlib.h>

int main() {

	// initiate input integer var
	int input;

	//take in input 
	printf("Enter an integer : ");
	scanf("%d", &input); 
	printf("\n"); 

	//print signed and unsigned decimal and hex using printf
	printf("signed decimal   : %d\n", input);
	printf("unsigned decimal : %u\n", input);
	printf("hexadecimal      : %x\n", input);

	//convert var input to binary 
	int i = 31;
	int bin[32];
	int temp;
	int curr = 0; 

	while(i >= 0){
		
		temp = input >> i;

		if(temp & 1) bin[curr] = 1; 
		else bin[curr] = 0; 

		i--;
		curr++; 

	}

	//print with putc and for loop 
	printf("binary           : "); 

	for(int i = 0; i < 32; i++){
		char c = bin[i] + '0'; 
		putc(c, stdout); 
		
		if((i & 3) == 3){
			printf(" ");
		}
	}
	printf("\n");

	return EXIT_SUCCESS;
}
