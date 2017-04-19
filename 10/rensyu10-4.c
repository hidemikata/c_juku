/* main関数の
 * RYOU urayasu;
 * をヒープ領域に確保するように変更しろ*/


#include<stdio.h>

typedef struct {
	int room1;
	int room2;
} RYOU;

void swap_room(RYOU* r) {
	int tmp;
	tmp = r->room1;
	r->room1 = r->room2;
	r->room2 = tmp;
}

int main () {
	RYOU urayasu;
	urayasu.room1 = 1;
	urayasu.room2 = 2;
	swap_room(&urayasu);
	printf("room1(%d)\n", urayasu.room1);
	printf("room2(%d)\n", urayasu.room2);
}



