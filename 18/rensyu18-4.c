/* 
 * code_fpを適当な値で初期化しろ
 * codeが3で割ったあまりが0のときにfpを実行するように実装しろ。
 * 戻り値をうけとってprintfで表示させろ。
 */
#include<stdio.h>
int func1(int b){
	printf("%s\n", __FUNCTION__);
	return 1;
}
int func2(int b){
	printf("%s\n", __FUNCTION__);
	return 2;
}
int func3(int b){
	printf("%s\n", __FUNCTION__);
	return 3;
}

typedef struct {
	int code;
	int (*fp)(int);
} CODE_FP_T;

CODE_FP_T code_fp[10] = {
	{1, ...},
	{2, },
	{3, },
	{4, },
	{5, },
	{6, },
	{7, },
	{8, },
	{9, },
	{10,},
};

int main(){
	int i;
	for(i = 0; i < 10 ; i++){
		if(...){
			...
		}
	}

	return 0;
}







