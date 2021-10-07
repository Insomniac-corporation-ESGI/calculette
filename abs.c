#include <stdio.h>

int main (void){
	int a = -12331;
	a = ((a >> 31) ^ a) - (a >> 31);
	printf("a = %d ",a);
	
	int b = 12331;
	b = ((b >> 31) ^ b) - (b >> 31);
	printf("b = %d ",b);

	return 1;
}
