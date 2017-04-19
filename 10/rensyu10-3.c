/*
 * KOU2_malloc()とKOU2_free()を使用して
 * プログラムを完成させろ
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int a;
} KOU2;

typedef struct {
	KOU2 *kp2;
} KOU1;


KOU2 *KOU2_malloc() {
	KOU2 *p = malloc(sizeof(KOU2));
	p->a = 10;
	return p;
}

void KOU2_free(KOU2 *k2) {
	free(k);
}

void print_value(KOU1 *k1) {
	printf(...);
}
int main() {
	KOU1 k1;
	...
	print_value(...);
	...
}


/*出力
 * 10
 */

