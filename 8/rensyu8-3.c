/*
 *以下のデータ構造で
 *SYAIN１００人分のデータを作れ
 *すべてのデータを表示させろ
*/ 


#include <stdio.h>

typedef struct {
	int kaisya_code;
}KAISYA

typedef struct {
	int jusyo;
	int pc;
	KAISYA jozoku_kaisya;
}ID;

typedef struct {
	int basyo;
	int jigyousyo_code;
} JIGYOUSYO;


typedef struct {
	int syain_no;
	ID id;
	JIGYOUSYO* jigyousyo;
} SYAIN;


int main () {

SYAIN syain[100] =
...



}

