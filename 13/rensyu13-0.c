/*
main関数で宣言されている
listの指している配列を
num_listの先頭アドレスに変更する関数
chage_listを完成させろ。
*/

#include<stdio.h>

int num_list[4] = {10,20,30,40};

void change_list(...) {
	//ここでmain関数のlistを指している先をnum_listの先頭アドレスに
        //変更する。...
}

int main(){
	int tmp[4] = {0,0,0,0};//int型の配列を作成
	int *list = tmp;//配列の先頭アドレスを(list)int*に代入。
	//listはtmpの先頭アドレスを指している。

	//listが指しているアドレスを変更する関数を呼び出す。
	change_list(...);

	int i;
	for(i = 0; i < 4; i++){
		printf("%d\n", list[i]);
	}

	return 0;
}
/*
出力
10
20
30
40
*/


