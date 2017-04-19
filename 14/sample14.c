#include <stdio.h>
#include <string.h>


//それぞれ検索して調べること。
int main (){
	int i;
	//memset
	char name[10] = "12345679";
	printf("%s\n", name);	
	memset(name + 2, 'a', 2);	
	printf("%s\n", name);	
	memset(name, 0, 10);//0で初期化
	printf("%s\n", name);	
	//memcpy
	int src[3] = {1,2,3};
	int dest[3] = {4,5,6};
	for (i = 0; i< 3;i++){printf("%d\n",dest[i]);}
	memcpy(dest, src, 12);//destへコピー
	for (i = 0; i< 3;i++){printf("%d\n",dest[i]);}
	
	//sprintf
	char *car_name = "wrx";
	char s_char[256];//ここにコピーされるので領域が必要(ポインターだとNG。)
	printf("%s\n", car_name);
	sprintf(s_char, "%s\n", car_name);
	printf("%s\n", car_name);
	int door  = 4;
	char *option  = "recoder";
	sprintf(s_char, "door = %d %s option is %s\n",door,car_name, option);
	printf("%s", s_char);
	
	//strcpy
//	char *tell_src = "09012345678";
//	char *tell_dest ="00000000000";
	//errorになるhttp://www9.plala.or.jp/sgwr-t/c/sec10-3.html
	char tell_src[] = "09012345678";
	char tell_dest[] ="00000000000";
	strcpy(tell_src, tell_dest);
	printf("%s\n",tell_src);


	//strcmp
	char *str1 = "123";
	char *str2 = "123";
	char *str3 = "000";
	if (strcmp(str1, str2) == 0) {printf("true\n");} else {printf("false\n");}
	if (strcmp(str1, str3) == 0) {printf("true\n");} else {printf("false\n");}

	//strlen
	printf("%ld\n", strlen(str1));

}




