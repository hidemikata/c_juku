/*
 * 関数ポインタ宣言
 * 戻値の型 (*変数名)(引数の型)
 * Ex:void(*func)(void)
 * 型 (*)()
 */

#include<stdio.h>

void func1(){
	printf("%s\n", __FUNCTION__);
}
void func2(){
	printf("%s\n", __FUNCTION__);
}

int recieve_fp(void (*fp)(void)){ //引数でもらうことも可能
	fp();//引数を実行
}

int func3(int a, int b){
	printf("%d,%d\n", a, b);
}

/*
 *関数ポインタを返す関数
 *関数名get_func。引数(int a)
 *
 *戻値の型void(*)(void)
*/
void (*get_func(int a))(void){
	if (a == 1) {
		return func1;//func1の関数ポインタを返却
	} else if (a == 2 ){
		return func2;//func2の関数ポインタを返却
	}
}

int main(){
	void (*fp)(void);//関数ポインタ型を入れる箱を作成
	fp = func1; //宣言されている関数名だけ書くとアドレスが取得可能
	fp();//関数実行

	fp = func2;//fpをfunc2のアドレスに切り替え
	fp();

	recieve_fp(func1); //変数なので引数で渡すことも可能
	recieve_fp(fp);

	int (*fpi)(int, int);//戻値の型int 引数int型２個
	fpi = func3;
	fpi(1,2);

	fp = get_func(1);
	fp();
	fp = get_func(2);
	fp();
} 
