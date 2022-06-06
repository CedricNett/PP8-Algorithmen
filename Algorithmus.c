#include <stdio.h>

int main(){

	int a[]={1,56,5,3,8,6,0,34,4,6,87,2,1};

	int minimum = a[0];

	for(int i=0; a[i]!=0; i++)	{
		if (a[i] < minimum) minimum = a[i];
		}

	printf("Die kleinste Zahl im Array (1,56,5,3,8,6,0,34,4,6,87,2,1) ist die Zahl %i \n", minimum);

	return 0;
	}
