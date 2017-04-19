#include<stdio.h>

typedef struct {
	char *name;
	int number;
}SMART_PHONE;

typedef struct {
	char name[13];
	int number;
}SMART_PHONE_ARRAY;


void func_text(char *p){
	printf("%s\n", p);
}
void print_phone(SMART_PHONE* phone) {
	printf("name = %s\n", phone->name);
	printf("number = %d\n", phone->number);
}
void set_phone(SMART_PHONE* phone) {
	phone->name = "iphoneSE";//NG.
	phone->number = 456;
}
void set_phone_array(SMART_PHONE_ARRAY* phone) {
	strcpy(phone->name, "iphone array");//OK
	phone->number = 789;
}
void print_phone_array(SMART_PHONE_ARRAY* phone) {
	printf("name = %s\n", phone->name);
	printf("number = %d\n", phone->number);
}

int main () {
	char *abc = "abc";
	printf("%s\n", abc);
	char cde[] = "cde";
	printf("%s\n", cde);
	abc = cde;
	printf("%s\n", abc);
//	cde = abc;//compile error
	printf("%c\n", "fghi"[2]);
	func_text("jkl");
	func_text(cde);

	SMART_PHONE my_phone;
	my_phone.name = "iphone";
	my_phone.number = 123;
	print_phone(&my_phone);

	SMART_PHONE my_phone2;
	set_phone(&my_phone2);
	print_phone(&my_phone2);

	SMART_PHONE_ARRAY phone_arr;
	set_phone_array(&phone_arr);
	print_phone_array(&phone_arr);
}
