#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[5];
	
	for (i=0; i<5; i++)
	{
		printf("grade[%i]=", i);
		scanf("%d", &grade[i]);
	}
	
	int j;
	int *arr;
	int sum=0;
	
	for (j=0; j<5; j++)
	{
		arr = &grade[j];
		sum = sum+grade[j];
		
		printf("grade[%i]: %i\n", j, *arr);
	}
	
	printf("average: %d", sum/5);
	return 0;
}
