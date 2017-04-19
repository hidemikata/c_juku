/*
 *以下のデータ構造で
 *SYAIN１００人分のデータを作れ
 *（グローバル変数でよい。）
 *すべてのデータを表示させろ
*/ 


#include <stdio.h>

typedef struct {
	int basyo;
	int jigyousyo_code;
} JIGYOUSYO


typedef struct {
	int syain_no;
	int tel;
	int busyo;
	int yakusyoku;
	int club;
	JIGYOUSYO* jigyousyo;
} SYAIN;


int main () {

}

