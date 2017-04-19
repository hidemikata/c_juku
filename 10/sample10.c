#include<stdio.h>
#include<stdlib.h>

void add(int *a){
	*a = 3;
}

int main() {
	int a = 1;
	int b = 2;
	int *heap = malloc(4);//4byte sizeof(int)
	add(heap);
	printf("%d %d %d\n", a, b, *heap);
	printf("%p %p %p\n", &a, &b, heap);
	free(heap);
	*heap = 4;//動作不定
}

