/*
 * FUNC_Pで定義されている関数ポインタに適当な関数のアドレスを代入しろ
 * 関数は適宜用意すること。
 * run_funcsで渡された構造体に入っている関数ポインターを実行して動作確認しろ
 */

#include<stdio.h>
typedef struct {
	int(*func1)(int);
	void(*func2)(char *);
	int*(*func3)(void);
} FUNC_P;

void run_funcs(FUNC_P *k){
	k->
}

int main(){
	FUNC_P func_k;
} 

