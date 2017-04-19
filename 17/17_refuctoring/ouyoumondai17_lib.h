
typedef struct {
	int a;
}JOB_DATA;


JOB_DATA *create_job_copy(int);
void set_number_job_copy(int);
int check_job_data(JOB_DATA*);
void POST_error_res_copy(int);
int execute_job(JOB_DATA*);
void print_error(const char*);
void POST_error_res_on_execute_copy(int);
void print_current_status(const char*);

JOB_DATA *create_job_print(int );
void POST_error_res_on_execute_print(int);
void POST_error_res_print(int);
void send_msg_complete_job_to_driver(int);

JOB_DATA *create_job_fax(int);
void POST_CLIENT_error_res_fax(int);
void POST_CLIENT_error_res_on_execute_fax(int);
void send_msg_complete_job_to_client(int);

enum {
	POST_COPY_CHECK_ERROR,
	POST_COPY_EXEC_ERROR,
	POST_PRINT_CHECK_ERROR,
	POST_PRINT_EXEC_ERROR,
	POST_FAX_CHECK_ERROR,
	POST_FAX_EXEC_ERROR,
};
enum{
	PRINT_COMPLETE,
	FAX_COMPLETE,
};

