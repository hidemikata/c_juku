/*
 * 出力結果通りとなるように、
 * xxxxxxxxxx
 * をかきかえろ。
 * */ 

#include <stdio.h>

void func_no_3(int *a){
	printf("a3 = %d\n", *a);
}

int main() {
	int a[5];
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;

	func_no_3(xxxxxxxxxx);
}

/*
出力結果
a3 = 3
*/

