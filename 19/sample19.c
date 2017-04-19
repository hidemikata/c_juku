//http://kaworu.jpn.org/c/C%E8%A8%80%E8%AA%9E%E3%81%AE%E3%83%9E%E3%83%AB%E3%83%81%E3%82%B9%E3%83%AC%E3%83%83%E3%83%89%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0
//解説ページ
//コンパイルコマンド
// gcc -pthread sample19.c

#include <stdio.h>
#include <pthread.h>


void *func1(){
	printf("%s\n", __FUNCTION__);
}
void *func2(){
	printf("%s\n", __FUNCTION__);
}

int main(){
	pthread_t thread1;
	pthread_t thread2;
	//https://linuxjm.osdn.jp/html/glibc-linuxthreads/man3/pthread_create.3.html
	//スレッドの生成と開始。funcを呼び出す。
	int ret = pthread_create(&thread1, NULL, func1, NULL);
	if (ret != 0) {
		printf("error");
	}
	ret = pthread_create(&thread2, NULL, func2, NULL);
	if (ret != 0) {
		printf("error");
	}
	//https://linuxjm.osdn.jp/html/glibc-linuxthreads/man3/pthread_join.3.html
	//スレッドの終了
	pthread_join(thread1, NULL);	
	pthread_join(thread2, NULL);	
}
