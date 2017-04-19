/*
 * 車を想定したサンプルコード
 * 下部の出力になるように
 * 各関数内を完成させろ
 *
 */ 

#include<stdio.h>

typedef struct {
	int num;
}TIRE;

typedef struct {
	int num;
}HANDLE;

typedef struct {
	int opt_code;
}OPTION;

typedef struct {
	TIRE *t;
	HANDLE* h;
	OPTION o;
}CAR;

//TIRE構造体に代入する関数
void set_tire(CAR* obj) {
}

//HANDLE構造体に代入する関数
void set_handle(HANDLE* handle) {
}

//OPTION構造体に代入する関数
void set_option(OPTION* opt) {
}

void print_car(CAR* car){
	printf("tire:%d\n");
	printf("handle:%d\n");
	printf("option:%d\n");
}

int main () {
	...
	print_car(...);

}
/*
出力
tire:4
handle:1
option:100
*/

