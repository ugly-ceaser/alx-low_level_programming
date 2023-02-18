#include <stdlib.h>
#include <time.h>
int main() {
    
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	
	if (n > 0){
	    printf("is positive");
	}else if (n == 0){
	    printf("is Zero");
	}else{
	    printf("is negative");
	}
	return (0);
}
