#include<stdio.h>

typedef struct {
	int a;
	int b;
}STR_ARRAY;

int main (){
	int a[3] = {1,2,3};
	STR_ARRAY str_arr_sta = {111,222};
	STR_ARRAY str_arr[3] = {{11,22},{33,44},{55,66}};

	printf("%d\n", a[0] );
	printf("%d\n", a[1] );
	printf("%d\n", a[2] );

	printf("%d\n", str_arr_sta.a );
	printf("%d\n", str_arr_sta.b );

	printf("%d\n", str_arr[0].a );
	printf("%d\n", str_arr[0].b );
	printf("%d\n", str_arr[1].a );
	printf("%d\n", str_arr[1].b );
	printf("%d\n", str_arr[2].a );
	printf("%d\n", str_arr[2].b );
}




