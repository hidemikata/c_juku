/* 
 * 以下のプログラムを完成させろ
 * ...の箇所を書き換えれば良い。
 */

#include<stdio.h>

void func(int b){
	printf("func%d\n", b);
}

void recieve_func_p(int a, int b, ...){
	printf("a%d\n",a);
	printf("b%d\n",b);
	f(3);
}

int main(){
	recieve_func_p(...);

	return 0;
}
/*
 * 出力例
 * a1
 * b2
 * func3
 */

