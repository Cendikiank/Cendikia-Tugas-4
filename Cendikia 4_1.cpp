#include <stdio.h>
int main()

{
	//Deklarasi variabel
	int bilangan;
	
	//Meminta input bilangan dari pengguna
	printf("masukkan sebuah bilangan bulat positif: ");
	scanf("%d", &bilangan);
	
	//emeriksa apakah bilangan positif atau tidak
	
	//Memeriksa apakah bilangan genap atau ganjil
	if (bilangan % 2 == 0) {
		printf("GENAP\n");
	}
	else {
		printf("GANJIL\n");
	}
	
	return 0;
}
