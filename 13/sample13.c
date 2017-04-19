#include <stdio.h>

int main(){
	//http://bituse.info/c/28
	char *figure1; //アドレスを入れる箱
	char **figure2;//アドレスを入れる箱のアドレスを入れる箱
	char buf1[50]="abcdefg";
	char buf2[50]="hijklmn";
	figure1 = buf1;//"abcdefg"の先頭アドレスを箱に入れる
	printf("%s\n", figure1);
	figure2 = &figure1;//先頭アドレス入れた箱のアドレスを箱に入れる
	*figure2 = buf2;//figure2に入っているアドレスの指している先をbuf2に書き換える
	printf("%s\n", figure1);
	**figure2 = 'z';//figure2に入っているアドレスの指している先のアドレスが指している先をzに変更する
	printf("%s\n", figure1);
	return 0;
}



