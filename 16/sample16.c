#include<stdio.h>

typedef struct {
	int b;
	int c;
} BBB;
typedef struct {
	int a;
	int b;
} AAA;

void cast_bbb_and_input(void *p){
	/*元と違う型にもキャストして代入することが可能*/
	BBB* pp = (BBB*)p;
	pp->b = 3;
	pp->c = 4;
}
void input_aaa(void *p){
	AAA* pp = (AAA*)p;
	pp->a = 1;
	pp->b = 2;
}

void int_add(void *p){
	/*void*をint*にキャストして代入*/
	*(int*)p = 20;
	//*p = 30;//コンパイルエラーになる。サイズがわからないので。
}
int main(){
	/*
	算術演算時の型キャスト
	型変換の参考ページ
	http://www9.plala.or.jp/sgwr-t/c/sec04.html
	http://www9.plala.or.jp/sgwr-t/detail/TypeConversion.html
	ポイント
	・キャスト先の箱のほうが大きけれ問題なし。
	・小数点と整数の計算はdoubleにキャストされるため、
	  明示的に(double)とは書かなくてもよい
	*/
	
	/*データ処理上でのキャスト */
	void* a = NULL;
	int i = 10;
	a = &i;	
	int_add(a);
	printf("%d\n", i);

	/*構造体へのキャスト */
	AAA aaa;
	input_aaa(&aaa);
	printf("%d\n", aaa.a);
	printf("%d\n", aaa.b);


	/*違う型へのキャスト構造体へのキャスト */
	AAA aaa2;
	cast_bbb_and_input(&aaa2);
	printf("%d\n", aaa2.a);
	printf("%d\n", aaa2.b);
}



