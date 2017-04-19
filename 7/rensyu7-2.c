
/*
 *定義されている構造体を適当な値で初期化し、
 *printfで確認しろ。
 */

#include <stdio.h>
 
int main () {
    typedef struct {
        int *c;
        int d;
    }KOUZOU_2;
    typedef struct {
        KOUZOU_2 a;
        KOUZOU_2 b;
    }KOUZOU_1;
}
