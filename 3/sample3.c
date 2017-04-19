#include<stdio.h>


/*
 * 社員構造体を定義し、社員NOを設定できるようにした。
 * 社員に部署を設定できるようにした。
 * 部署には事業所NOと社員の数を設定することができる。
 *
 */

typedef struct {
	int jigyousyo;
	int num_of_syain;
}BUSYO;

typedef struct {
	int syain_no;
	BUSYO busyo;
}SYAIN;


void input_busyo(SYAIN* s){
	if (s->syain_no == 123) {
		s->busyo.jigyousyo = 1;
		s->busyo.num_of_syain = 50;
	} else if (s->syain_no == 456){
		s->busyo.jigyousyo = 2;
		s->busyo.num_of_syain = 30;
	} else {
		//nothing to do.
	}
}

//有効な社員NOは123、456とする。
int main () {
	SYAIN mikata;
	mikata.syain_no = 123;
	SYAIN okada;
	okada.syain_no = 456;
	input_busyo(&mikata);
	input_busyo(&okada);
	
	printf("mikata:syain_no(%d), jigyousyo(%d), num_of_syain(%d)\n",
		       mikata.syain_no, mikata.busyo.jigyousyo, mikata.busyo.num_of_syain);
	printf("okada:syain_no(%d), jigyosyo(%d), num_of_syain(%d)\n",
		       okada.syain_no, okada.busyo.jigyousyo, okada.busyo.num_of_syain);

}



