
#include <stdlib.h>
#include <time.h>
int main() {
    // Write C code here
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	if (n > 0){
	    printf("is positive");
	}else if (n == 0){
	    printf("is Zero");
	}else{
	    printf("is negative");
	}
	return (0);
}
