/* Print the following pattern

*
* * 
* * *
* * * *
* * * * *

*/

#include<stdio.h>

int main() {
	int i, j;
	for(i=1; i<=5; i++) {
		for(j=1; j<=i; j++) {    // loop for column which is equal to no. of i
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
