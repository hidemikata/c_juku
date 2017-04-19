// gcc -pthread sample19.c
 
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
enum {
	CMD_PAPER_INPUT,
	CMD_FRONT_DOOR_OPEN,
	CMD_SD_CARD_INPUT,
	CMD_EXIT,
};	

int cmd = 0;

void *func1(){
	while(1) {
		if (cmd == 0) {
			printf("wait for cmd\n");
			sleep(1);
			continue;
		}
		switch(cmd) {
			case CMD_PAPER_INPUT:
				printf("CMD_PAPER_INPUT\n");
				break;
			case CMD_FRONT_DOOR_OPEN:
				printf("CMD_FRONT_DOOR_OPEN\n");
				break;
			case CMD_SD_CARD_INPUT:
				printf("CMD_SD_CARD_INPUT\n");
				break;
			case CMD_EXIT:
				printf("CMD_SD_CARD_INPUT\n");
				break;
			default:
				printf("out of command !!\n");
				break;
		}
		if (cmd == CMD_EXIT) {
			break;
		}
		cmd = 0;
	}
	return 0;
}
 
int main(){
	pthread_t thread1;
	int ret = pthread_create(&thread1, NULL, func1, NULL);
	if (ret != 0) {
	    printf("error");
	}

	int input_cmd;
	for(;;){
		printf("input cmd>");
		scanf("%d", &input_cmd);
		cmd = input_cmd;
		if (cmd == CMD_EXIT) {
			break;
		}
	}


	pthread_join(thread1, NULL);



}
