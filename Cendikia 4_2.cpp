#include <stdio.h>

int main() {
	int N;
	
	//input
	printf(" masukkan nomor: ");
	scanf("%d", &N);
	
	//condition check
	if (N>50){
		N = N + 10;
	}
	
	//output
	printf("Output; %d\n", N);
	
	return 0;
}
