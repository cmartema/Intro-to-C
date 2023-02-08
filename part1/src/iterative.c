#include <stdio.h>
#include <stdlib.h> 
#include "iterative.h"

int gcd_iterative(int m, int n){

	while(m != 0 && n != 0){
		
		int r = n; 
		n = m % n; 
		m = r; 
	}

	return m + n; 
}
