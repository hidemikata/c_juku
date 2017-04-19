/*
 * func()とmain()を完成させろ
 */

#include<stdio.h>


int mul1(int b){
	return b * 2;
}
int mul2(int b){
	return b * 3;
}

int func(int a, ... , int c){ //関数ポインターfpで受け取る。
	return a + fp(c);
}

int main(){
	int a;
	a = func(3, ..., 4); //mul1の関数アドレスを渡す
	printf("%d\n", a);//3 + (4 * 2) = 11
	a = func(3, ..., 4); //mul2の関数アドレスを渡す
	printf("%d\n", a);//3 + (4 * 3) = 11
} 
/*
 *出力
 *11
 *15
 */

