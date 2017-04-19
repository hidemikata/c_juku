/*
 * func関数のアドレスを代入できる関数ポインタfpを宣言し、
 * 関数ポインタから呼び出せ
 */

#include<stdio.h>

int func(int* a){
	*a = 10;	
}

int main(){
	...
	fp = func;
	...

	printf("%d", a);	
} 

/*
 *出力
 *10
 */
