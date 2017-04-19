/*
 * add_plus_oneを完成させろ
 * 関数仕様
 * 整数と、構造体ポインタを受け取る。受け取る整数なんでもよい。例えば３。
 * 受け取った整数に１をプラスし、
 * 構造体メンバーkに代入する。
 * 
 * print_sampleで値を表示させろ
 *
 */

#include<stdio.h>

typedef struct {
	int k;
} SAMPLE_KOU;

void add_plus_one(...){
}
void print_sample(SAMPLE_KOU *kouzou){
	printf("k = %d\n");
}

int main() {
	...
	add_plus_one(...);
	print_sample(...);
}

