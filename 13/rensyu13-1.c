/*
 *グローバル宣言されているsyain_name_list[]から、
 *指定の要素を取得する関数get_nameを作れ
 * (引数は２個)
 *
 */

#include <stdio.h>

char* syain_name_list[] = {
"tama",
"hanazawa",
"urano_ojii_chan",
"isasaka_sensei",
"tarawo",
};

void get_name(...){
...
}

int main(){
	char *name = "-";
	printf("%s\n", name);
	get_name(...);
	printf("%s\n", name);
}
/*
出力結果例
-
isasaka_sensei
*/
