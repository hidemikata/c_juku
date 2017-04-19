/*
 * 出力と同じようになるようにプログラムを完成させろ
 */
#include<stdio.h>

typedef struct {
	int arr[3];
} KOU;

void func(void *){
	...
	pp->arr[0];
	pp->arr[1];
	pp->arr[2];
}
int main(){
	KOU k = {0};

	func(...);
	
	printf("%d\n", k.arr[0]);
	printf("%d\n", k.arr[1]);
	printf("%d\n", k.arr[2]);
}

/*
 * 出力
 *1
 *2
 *3
 *
 */



