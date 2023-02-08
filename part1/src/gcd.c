#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {

	if(argc != 3){
		fprintf( stderr, "Usage: ./gcd <integer m> <integer n>\n" ); 
		return EXIT_FAILURE;
	}
	
	int arg_one = atoi(argv[1]); 
	int arg_two = atoi(argv[2]); 

	int m = abs(atoi(argv[1])); 
	int n = abs(atoi(argv[2]));

	if(m == 0 && n == 0){
		printf("gcd(0, 0) = undefined\n");
		return EXIT_SUCCESS;
	}


	int iter_ans = gcd_iterative(m, n); 
	int recur_ans = gcd_recursive(m, n); 

	printf("Iterative: gcd(%d, %d) = %d\n", arg_one, arg_two, iter_ans);
	printf("Recursive: gcd(%d, %d) = %d\n", arg_one, arg_two, recur_ans);
 
	return EXIT_SUCCESS;
}
