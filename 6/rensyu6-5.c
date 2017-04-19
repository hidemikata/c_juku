/*
 * 出力結果の通りになるように、
 * 「...」となっている部分を実装しろ
 * */ 

#include <stdio.h>


typedef struct {
	int cc;
	int dd;
} SAMP_cde;


typedef struct {
	SAMP_cde cde[3];
} SAMP_ab;

void func(...) {
	int i;
	for(i = 0; i < 3; i++) {
		printf("%d\n", ...);
		printf("%d\n", ...);
	}
}

int main() {
	SAMP_ab k;
	k.cde[0].cc = 1;
	k.cde[0].dd = 2;
	k.cde[1].cc = 3;
	k.cde[1].dd = 4;
	k.cde[2].cc = 5;
	k.cde[2].dd = 6;
	
	func(...);
}



/*
 *出力結果
 *1
 *2
 *3
 *4
 *5
 *6
 */
