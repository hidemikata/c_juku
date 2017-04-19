/*
 *samples[]の文字列の合計を調べる関数string_allを完成させろ
 *文字の数ではなく文字列の数。
 *1行だけ追加すること
 */



#include <stdio.h>
#include <string.h>

typedef struct {
	char *string;
} KOU;

KOU samples[] = {
{"13341353153"},
{"15314"},
{"143"},
{"31431434132413"},
{"143431"},
{"4314314"},
{"11"},
};

int string_all() {
	return sizeof(samples)/sizeof(samples[0]);
}

int main (){
	printf("%d\n", string_all());
}




