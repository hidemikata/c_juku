/*
 * rensyu1.cの拡張
 * TIRE_COATINGのポインターを受けとり
 * coat_idに代入する関数をつくれ。
 * 出力させて確認しろ。
 * (代入する値はなんでもよい。）
 */ 

#include<stdio.h>

typedef struct {
	int coat_id;
}TIRE_COATING;       //拡張

typedef struct {
	int num;
	TIRE_COATING* coat;//拡張
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

void print_car (CAR* obj){
	printf("tire:%d\n");
	printf("handle:%d\n");
	printf("option:%d\n");
	printf("coat_id:%d\n");
}

int main () {
	...
	print_car(...)
}

/*
出力
tire:4
handle:1
option:100
coat_id:xxx
*/

