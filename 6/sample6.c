#include<stdio.h>

void func(int *a){
	printf("a1=%d\n",*(a+1));
	printf("a1=%d\n",a[1]);
}

int main (){
	int hairetsu[5];

	hairetsu[0] = 0;
	hairetsu[1] = 1;
	hairetsu[2] = 2;
	hairetsu[3] = 3;
	hairetsu[4] = 4;

	int i;
	for (i = 0; i < 5; i++){
		printf("hairetsu[%d]=%d\n", i, hairetsu[i]);
	}	
	printf("---\n");

	int *p_hairetsu;
       	p_hairetsu = hairetsu;
	//配列の[]なしの表記はその配列の先頭アドレスを示す。
	

	printf("ADDRESS hai%p\n", &hairetsu[0]);
	printf("ADDRESS p  %p\n", p_hairetsu);
	//p_hairetsuにはhairetsu[0]のアドレスが入っている。
	printf("---\n");
	for (i = 0; i < 5; i++){
		printf("%d\n", *(p_hairetsu+i));
		//ポインタはintと同じように演算が可能。

	}
	printf("---\n");
	printf("ADDRESS hai%p\n", &hairetsu[1]);
	printf("ADDRESS p  %p\n", p_hairetsu+1);
	
	
	//ポインターは配列と同じような動きが可能。
	
	
	func(hairetsu);
	
}




