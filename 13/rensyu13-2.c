/*
 *出力と同様になるように完成させろ
 */

#include <stdio.h>

int main(){

	int i = 123456;
	int *i_p;
	int **i_pp;

...

	printf("i=%d\n", i);
	printf("*i_p=%d\n", *i_p);
	printf("**i_p=%d\n", **i_pp);

	printf("*i_pp=%p\n", *i_pp);
	printf("  i_p=%p\n", i_p);

	return 0;
}

/*出力
i=123456
*i_p=123456
**i_p=123456
*i_pp=0x7fff5b256b78
  i_p=0x7fff5b256b78
*/

