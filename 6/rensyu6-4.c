/*
 * 以下のコードを実行しろ。
 * 出力結果を説明しろ
 * 
 * */ 

#include <stdio.h>

typedef struct {
	int cc;
	int dd;
	int ee;
} SAMP_cde;


typedef struct {
	int aa;
	int bb;
	SAMP_cde cde;
} SAMP_ab;


int main() {
	SAMP_ab k[2];
	printf("%p\n", &k[0]);
	printf("%p\n", &k[1]);
}
