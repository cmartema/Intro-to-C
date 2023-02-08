#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {

	// making sure the number of arguments is correct
	if(argc != 3){
		fprintf( stderr, "Usage: ./gcd <integer m> <integer n>\n" ); 
		return EXIT_FAILURE;
	}

	// casting the args to ints and setting them to two variables 
	// this is for the print statement, not the gcd methods
	// in order to save the original values if they're negative	
	int arg_one = atoi(argv[1]); 
	int arg_two = atoi(argv[2]); 

	// casting the args to ints and taking their absolute value 
	int m = abs(atoi(argv[1])); 
	int n = abs(atoi(argv[2]));

	// if both arguments are 0 
	if(m == 0 && n == 0){
		printf("gcd(0, 0) = undefined\n");
		return EXIT_SUCCESS;
	}

	// executing the gcd methods 
	int iter_ans = gcd_iterative(m, n); 
	int recur_ans = gcd_recursive(m, n); 

	// printing results 
	printf("Iterative: gcd(%d, %d) = %d\n", arg_one, arg_two, iter_ans);
	printf("Recursive: gcd(%d, %d) = %d\n", arg_one, arg_two, recur_ans);
 
	return EXIT_SUCCESS;
}
