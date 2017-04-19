#include <stdio.h>
#include "ouyoumondai17_lib.h"

JOB_DATA sample_job;

JOB_DATA *create_job_copy(int a){
	printf("<%s>\n",__FUNCTION__);
	return &sample_job;
}
void set_number_job_copy(int a){
	printf("<%s>\n",__FUNCTION__);
}
int check_job_data(JOB_DATA* j){
	printf("<%s>\n",__FUNCTION__);
	if(j == NULL){
		return 0;
	} 
	return 1;
}
void POST_error_res_copy(int a){
	printf("<%s>\n",__FUNCTION__);
}
int execute_job(JOB_DATA* j){
	printf("<%s>\n",__FUNCTION__);
	if(j == NULL){
		return 0;
	} 
	return 1;
}
void print_error(const char* s){
	printf("<%s>\n",__FUNCTION__);
	printf("%s\n",s);
}
void POST_error_res_on_execute_copy(int a){
	printf("<%s>\n",__FUNCTION__);
}
void print_current_status(const char*s){
	printf("<%s>\n",__FUNCTION__);
	printf("%s\n",s);
}
JOB_DATA *create_job_print(int a){
	printf("<%s>\n",__FUNCTION__);
	return &sample_job;
}
void POST_error_res_on_execute_print(int a){
	printf("<%s>\n",__FUNCTION__);
}
void POST_error_res_print(int a){
	printf("<%s>\n",__FUNCTION__);
}
void send_msg_complete_job_to_driver(int a){
	printf("<%s>\n",__FUNCTION__);
}
JOB_DATA *create_job_fax(int a){
	printf("<%s>\n",__FUNCTION__);
	return &sample_job;
}
void POST_CLIENT_error_res_fax(int a){
	printf("<%s>\n",__FUNCTION__);
}
void POST_CLIENT_error_res_on_execute_fax(int a){
	printf("<%s>\n",__FUNCTION__);
}
void send_msg_complete_job_to_client(int a){
	printf("<%s>\n",__FUNCTION__);
}


