#include<stdio.h>
typedef enum {
	HELLO_WORLD,
	HELLO_JAPAN,
	AMERICAN,
	INTEL_CORE,
	INTEL_CORE_AMD,
	SEPARATOR = 10,
	MAC,
	DELL,
} ENUM_TYPEDEF;

int func1(int a){
	printf("%d\n", a);
}

int func2(ENUM_TYPEDEF a){
	printf("%d\n", a);
}

int main() {
	printf("%d\n",HELLO_WORLD);
	printf("%d\n",HELLO_JAPAN);
	printf("%d\n",AMERICAN   );
	printf("%d\n",INTEL_CORE );
	printf("%d\n", SEPARATOR);
	printf("%d\n", MAC  );
	printf("%d\n", DELL );

	func1(MAC);
	func2(AMERICAN);
}
