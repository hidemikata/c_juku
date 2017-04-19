/*
 * charの配列を用意し、
 * 0で初期化しろ、
 * その配列に出力サンプルのように整形した文字列を、
 * sprintfを使用して代入しprintfで出力しろ
 * get_no_telを使用してsyain[]からデータを取得すること。
 * s_no_str
 * tel_no_str
 * をしようすること。
 */


#include <stdio.h>
#include <string.h>

char *s_no_str = "SYAIN_NO=";
char *tel_no_str = "TEL=";
typedef struct {
	int no;
	char* tel;
}NO_TEL_STRUCT;

NO_TEL_STRUCT syain[] = {
	{123, "090123"},
	{456, "090444"},
	{789, "090999"},
};

void get_no_tel(int index ,int *syain_no, char **tel_pp){
	*syain_no = syain[index].no;
	*tel_pp = syain[index].tel;
}

int main (){

	...	
	get_no_tel(...);
	...	

	printf("%s\n", name);

}
/* 出力サンプル
 * SYAIN_NO=999TEL=090123
 */



