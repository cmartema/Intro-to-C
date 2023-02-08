#include <stdio.h>
#include <stdlib.h>
#include "recursive.h"

int gcd_recursive(int m, int n){

	if(m == 0 || n == 0){
		return m + n; 
	}

	return gcd_recursive(n, m % n);


}

