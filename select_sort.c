#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE   100
void select_sort();

void main()
{
	int i;
	int *array;
	
	array = (int *)malloc(sizeof(int)*MAX_SIZE);

	select_sort(array);
	free(array);
	return ;
}

void select_sort(int *array);
{
	int i,j;
	int temp;
	
	for(i=0; i<=MAX_SIZE-2; i++){
		for(j=i; j<=MAX_SIZE-2; j++){
			if(array[j] < array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
			temp = array[i];
			array[i] = array[MAX_SIZE-1];
			array[MAX_SIZE-1] = temp;
		}
	}
	return ;
}