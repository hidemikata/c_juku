#include <stdio.h>
 
int main () {
    /*配列の初期化*/
	int hairetsu_1[2] = {1,2};
    int hairetsu_2[2][2] = {{1,2},{3,4}};
    int i, j;
    for (i = 0; i< 2; i++) {
        for (j = 0; j< 2; j++) {
            printf("%d,%d=%d\n",i,j, hairetsu_2[i][j]);
        }
    }
 
    typedef struct {
        int c;
        int d;
    }KOUZOU;
	KOUZOU k = {1,2};
    printf("k %d,%d\n", k.c, k.d);




    typedef struct {
        int c;
        int d;
    }KOUZOU_2;
    typedef struct {
        KOUZOU_2 a;
	int b;
    }KOUZOU_1;
    KOUZOU_1 k_2 = {{1,2},3};
     
    printf("k_2 %d,%d,%d\n", k_2.a.c,k_2.a.d,k_2.b);


}


