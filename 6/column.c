/*引数と戻り値の説明*/


#include<stdio.h>

//-----グローバル変数
typedef struct {
	int sample;
}KOUZOU;

KOUZOU kou;




int global = 4;

void func0(){
	printf("func0\n");
}
int func1(int a){
	printf("func1 a=%d\n",a);
	return 3;
}
//-----グローバル変数

int func2(int a, int b){
	int ret = 0;
	printf("func2 a=%d, b=%d\n",a,b);
	ret = a+b;
	return ret;
}
int *func3(){
	return &global;
}

KOUZOU *func4(){
	kou.sample = 5;
	return &kou;
}

int main (){
	int aa = 1;
	int bb = 2;

	func0();

	int func1_ret;
	func1_ret = func1(aa);
	printf("func1_ret=%d\n",func1_ret);

	int func2_ret;
	func2_ret = func2(aa,bb);
	printf("func2_ret=%d\n",func2_ret);

	int *func3_ret;
	func3_ret = func3();
	printf("func3_ret=%d\n",*func3_ret);

	KOUZOU *k;
	k = func4();
	printf("k=%d\n",k->sample);
}




