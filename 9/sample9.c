#include<stdio.h>

void atai_watashi(int a){
	a = 1;
	printf("%d\n", a);
}

void sansyou_watashi(int *b) {
	*b = 2;
	printf("%d\n", *b);
}

int main() {
	int i = 0;
	printf("%d\n",i);
	atai_watashi(i);
	printf("%d\n",i);
	sansyou_watashi(&i);
	printf("%d\n",i);

}

