/*
 * int型２個をヒープ領域に確保しろ。
 * その領域に値を代入する関数add()を完成させろ。
 * sizeofを使用すること。
 *
 */


#include<stdio.h>
#include<stdlib.h>

void add(int *a){
}

int main() {
	...
	add(h);

	printf("h[0]=%d\n",h[0]);
	printf("h[1]=%d\n",h[1]);

	free(h);
}




/*出力
 * 1
 * 2
 */

