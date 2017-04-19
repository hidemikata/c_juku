/* func_hairetsuを初期化しろ */

#include<stdio.h>

int func1(int a, int b){
	printf("%s\n", __FUNCTION__);
	return 1;
}
int func2(int a, int b){
	printf("%s\n", __FUNCTION__);
	return 1;
}
int func3(int a , int b){
	printf("%s\n", __FUNCTION__);
	return 1;
}

int (*func_hairetsu[3])(int, int)...

int main(){
	func_hairetsu[0](1,2);
	func_hairetsu[1](3,4);
	func_hairetsu[2](5,6);
}


