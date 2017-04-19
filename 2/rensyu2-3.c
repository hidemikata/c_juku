/*
 * input_clubを完成させろ。
 * input_clubは渡されたclubs変数の内容を
 * num_of_clubにを代入する。
 * num_of_clubには１４以下しか代入できないようにすること。
 * （公式なゴルフはクラブは１４本以下しか使用できないため、その疑似コードである。）
 * ->演算子を使わずにかき、説明しろ
 *
 */

typdef struct {
	int num_of_club;
} GOLF_CLUB;

void input_club(GOLF_CLUB* club, int clubs){
	...

}


int main (){
	GOLF_CLUB club1;
	club1.num_of_club = 0;
	input_club(&club1, 10);
	printf("num_ob_club %d\n", club1.num_of_club);

	input_club(&club1, 20);
	printf("num_ob_club %d\n", club1.num_of_club);
}
/*
 * 出力結果
 * num_ob_club 10
 * num_ob_club 14
 *
 */

