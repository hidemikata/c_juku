/*
 * プログラムを完成させろ
 * input_opt1_opt2()
 * 引数のoptを使用してのtire, handleに値を代入する
 * (引数をCAR_OPT_TEMPLATExxxでキャストして値を代入する)
 *
 * input_opt1_opt2_opt3()
 * 引数のoptを使用してのtire, handle, stereoに値を代入する
 * (引数をCAR_OPT_TEMPLATExxxでキャストして値を代入する)
 * 
 * print_car_opt2(), print_car_opt3()
 * オプションの値をすべてprintfする
 */
#include<stdio.h>

typedef struct {
	int tire;
	int handle;
}OPT_TIRE_HANDLE;

typedef struct {
	int tire;
	int handle;
	int stereo;
}OPT_TIRE_HANDLE_STEREO;

typedef struct {
	int opt1;
	int opt2;
} CAR_OPT_TEMPLATE_1;

typedef struct {
	int opt1;
	int opt2;
	int opt3;
} CAR_OPT_TEMPLATE_2;

typedef struct {
	void *opt_p;
}CAR;

void input_opt1_opt2(void *opt){
}

void input_opt1_opt2_opt3(void *opt){
}

void print_car_opt2(CAR *c){
}

void print_car_opt3(CAR *c){
}
int main(){
	CAR car;	

	/*オプション　タイヤ、ハンドルを設定して表示*/
	OPT_TIRE_HANDLE opt1;
	input_opt1_opt2(&opt1);
	car.opt_p = &opt1;
	print_car_opt2(&car);

	/*オプション　タイヤ、ハンドルステレオを設定して表示*/
	OPT_TIRE_HANDLE_STEREO opt2;
	input_opt1_opt2_opt3(&opt2);
	car.opt_p = &opt2;
	print_car_opt3(&car);
}

/*
 * 出力サンプル
 *4
 *1
 *4
 *1
 *10
 */


