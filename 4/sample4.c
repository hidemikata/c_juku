#include<stdio.h>

typedef struct {
	int a;
	int b;
}SAMPLE_ARRAY;

int main (){
	int i;
	SAMPLE_ARRAY array[2];
	array[0].a = 1;
	array[0].b = 2;
	array[1].a = 3;
	array[1].b = 4;

	for (i = 0; i < 2 ;i++) {
		printf("%d\n",array[i].a);
		printf("%d\n",array[i].b);
	}
}




