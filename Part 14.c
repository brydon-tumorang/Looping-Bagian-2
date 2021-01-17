#include <stdio.h>
int main (void)
{
	int i=0;
	do{
		i++;
		if (i==5){
			continue;
		}
		printf("%i + %i = %i \n",i,i,i+i);
	}while (i<10);
	return 0;
}
