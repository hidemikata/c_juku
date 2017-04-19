/*
 * 下のソースコードはcopy,print,faxがあり、main関数から呼ばれている。
 * どれもにたような関数になっており、それぞれ違う箇所がある。
 * 今後このようににたようなシーケンスの関数がたくさん追加されそうである。
 * 追加の際にはできるだけ簡単に行えるように今のうちに改善しておきたい。
 *
 * ３つのコードをよく分析し、リファクタリングしろ。
 * ・シーケンスの実装は１つだけにすること。
 * ・コンパイルコマンドgcc ouyoumondai17.c  ouyoumondai17_lib.h lib_17.a
 * ・動作確認は変更まえと変更後が同じになっていることで確認する
 *
 * */


#include<stdio.h>
#include"ouyoumondai17_lib.h"


int copy(int id){
	int job_id = id;
	
	JOB_DATA *j = create_job_copy(job_id);
	set_number_job_copy(10);

	if (!check_job_data(j)){
		print_error("check error");
		POST_error_res_copy(POST_COPY_CHECK_ERROR);
		return 0;
	}
	
	if (!execute_job(j)){
		print_error("execute error");
		POST_error_res_on_execute_copy(POST_COPY_EXEC_ERROR);
		return 0;
	}

	print_current_status("success execute ");

	return 1;
}

int print(int id){
	int job_id = id;
	
	JOB_DATA *j = create_job_print(job_id);

	if (!check_job_data(j)){
		print_error("check error");
		POST_error_res_print(POST_PRINT_CHECK_ERROR);
		return 0;
	}
	
	if (!execute_job(j)){
		print_error("check error");
		POST_error_res_on_execute_print(POST_PRINT_EXEC_ERROR);
		return 0;
	}

	send_msg_complete_job_to_driver(PRINT_COMPLETE);
	print_current_status("success execute ");

	return 1;
}


int fax(int id){
	int job_id = id;
	
	JOB_DATA *j = create_job_fax(job_id);

	if (!check_job_data(j)){
		print_error("check error");
		POST_CLIENT_error_res_fax(POST_FAX_CHECK_ERROR);
		return 0;
	}
	
	if (!execute_job(j)){
		print_error("execute error");
		POST_CLIENT_error_res_on_execute_fax(POST_FAX_EXEC_ERROR);
		return 0;
	}

	send_msg_complete_job_to_client(FAX_COMPLETE);
	print_current_status("success execute ");

	return 1;
}


int main(){
	copy(1);
	print(2);
	fax(3);

}

