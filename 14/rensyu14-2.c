/*
 *出力の通りになるようにcopyadd関数を完成させろ
 *sprintfを使用して１行だけ追加すること。
 */

#include <stdio.h>
#include <string.h>


void copyadd( char* dest, char* src) {
	...
}

int main (){

	char tell_src[] = "12345678";
	char tell_dest[256];

	copyadd(tell_dest, tell_src);
	printf("%s\n", tell_dest);

}


/*出力
 *09012345678
 */

