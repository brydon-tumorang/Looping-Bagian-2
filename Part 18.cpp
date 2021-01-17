#include <stdio.h>
int main (void)
{
	int angka;
	
	printf ("PROGRAM MENAMPILKAN TANGGAL MERAH DI BULAN JANUARI 2021");
	
	for (angka=1; angka>=30; angka++){
		if (angka ==3){
			continue;
		}
		printf("Bulan Yang Merah Adalah %angka \n",angka);
	}
	

}
	
