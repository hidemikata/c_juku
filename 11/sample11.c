#include<stdio.h>

#define MAX 10
#define multi(a,b) (((a)*(b)))
#define p(a) printf("%d\n", a)
#define data() data_func(__FUNCTION__, __LINE__)
#define check(a) {if(a==1){printf("num is %d\n",a);}}

#define testcall(a) test_func ## a()
#define PRINT_MACRO(a) printf(#a"\n")
#define DEF_A
#define IF_C 2
#define DEF_C

void test_func1(){
	printf("%s\n",__FUNCTION__);
}
void test_func2(){
	printf("%s\n",__FUNCTION__);
}
void data_func(const char *f, int line){
	printf("%s, %d\n", f, line);
}
int main() {
	int i; 
	for(i = 0; i< MAX; i++){
		printf("%d\n",i);
	}	
	printf("---\n");
	printf("%d\n", multi(1,2));
	if(multi(2,3)>MAX){
		printf("over max\n");
	}
	printf("---\n");
	p(999);
	printf("---\n");
	data();
	data();
	printf("---\n");
	check(1);
	printf("---\n");
	testcall(1);
	testcall(2);
	printf("---\n");
	PRINT_MACRO(mojiretsu);
	printf("---\n");

#ifdef DEF_A
	printf("def_a\n");
#endif

#ifdef DEF_B
	printf("def_b\n");
#endif

#if defined(DEF_C)
	printf("def_c\n");
#endif

#if IF_C == 1
	printf("if_c is 1\n");
#elif IF_C == 2
	printf("if_c is 2\n");
#else
	printf("else \n");
#endif

}

