/* 
 * 構造体FUNC_Tにfunc1,func2,func3のを代入するための
 * 関数ポインタ配列を宣言しろ。
 * main関数でメンバーに値を代入し、
 * exec_funcにわたして実行しろ
 */

#include<stdio.h>


void func1(int b){
	printf("%s\n", __FUNCTION__);
	return 1;
}
void func2(int b){
	printf("%s\n", __FUNCTION__);
	return 1;
}
void func3(int b){
	printf("%s\n", __FUNCTION__);
	return 1;
}

typedef struct {
	...
}FUNC_T;

void exec_func(...){
}

int main(){
	...
	print_func(...);
}


