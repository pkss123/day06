#include <stdio.h>

int main() {

	/*
		if ~ else 문
		조건이 참일 때 동작할 코드와 거짓일 때 동작할 코드를 구분해서 작성

		if ( 조건식 ) {
			조건이 참일 때 동작할 코드
		} else {
			조건이 거짓일 때 동작할 코드
		}
			* else 뒤에는 초가 조건을 작성할 수 없다
	*/

	//int s;
	//printf("숫자 입력 : ");	 scanf_s("%d", &s);

	//if (s % 2 == 0) {
	//	printf("짝수");
	//}
	//else {
	//	printf("홀수");
	//}

	//int age;
	//printf("나이 입력 : "); scanf_s("%d", &age);
	//
	//if (age > 19) {
	//	printf("성인");
	//}
	//else {
	//	printf("미성년자");
	//}

	//int s1, s2, s3, sum;
	//double avg;

	//printf("점수 입력 : "); scanf_s("%d %d %d", &s1, &s2, &s3);
	//sum = s1 + s2 + s3;
	//avg = sum / 3;

	//if (s1 >= 40 && s2 >= 40 && s3 >= 40 && avg >= 60) {
	//	printf("합격");
	//}
	//else {
	//	printf("불합격");
	//}

	/*
		중첨 if문
		if문 내부 코드에 if문 작성
		> 특정 결과에 대해 재분류(세분화) 할 때 사용

		if( 조건식1 ){
		조건식 1이 참이면 동작
			if( 조건식 2 ){
				조건식1이 참이면서 조건식 2도 참이면 동작
			}
			else{
				조건식 1이 참이면서 조건식 2가 거짓이면 동작
			}
		}
		else {
			조건식 1이 거짓이면 동작
			if(조건식 3){
				조건식 1이 거짓이면서 조건식 3이 참이면 동작
			}
			else{
				조건식 1이 거짓이면서 조건식 3도 거짓이면 동작
			}
		}
	*/

	//int a;
	//printf("숫자 입력 : "); scanf_s("%d", &a);

	//if (a > 0) {
	//	if (a % 2 == 0) 
	//		puts("양수이면 짝수");
	//	else
	//		puts("양수이면 홀수");
	//}
	//else {
	//	if (a < 0)
	//		puts("음수");
	//	else
	//		puts("0 이다");
	//}

	//char s;
	//int w;

	//printf("크기와 무게 입력 : ");
	//s = getchar();
	//scanf_s("%d", &w);

	//if (s == "S") {
	//if (w < 50)
	//	puts("cart-A");
	//else
	//	puts("cart-B");
	//}
	//else {
	//	if (s == "L")
	//		if (w < 50)
	//			puts("cart-C");
	//		else
	//			puts("cart-D");
	//}

	/*
		if ~ else if문
		 하나의 조건이 참이 아닐 때 다른 조건을 다시 확인
		 > 여러 조건 중 참이 되는 조건을 찾아서 해당 if문의 코드 동작

		if (조건식 1){
			조건식 1 참일때 동작
		}
		else if( 조건식2){
			위의 조건이 거짓이고 조건식 2 참일 때 동작
		}
		else if( 조건식 3){
			위의 조건이 거짓이고 조건식 3 참일때 동작
		}
		...
		else{
			모든 조건이 거짓일때 동작( 선택적으로 사용)
		}

			* 하나의 조건이 참이 되면 그 아래에 있는 조건은 확인 X
				>조건의 순서가 중요
	*/

	//int a;
	//printf("숫자 입력 : ");		scanf_s("%d", &a);

	//if (a > 20) {
	//	puts("a는 20보다 큰 수");
	//}
	//else if (a > 10) {
	//	puts("a는 10보다 큰수");
	//}
	//else if (a > 0) {
	//	puts("a는 0보다 큰 수");
	//}

	/* 전부 별개의 if문으로 사용하면 의도하지 않은 동작이 된다 */

	//if (a > 20)	puts("a는 20보다 큰 수");
	//if (a > 10)	puts("a는 10보다 큰 수");
	//if (a > 0)	puts("a는 0보다 큰 수");

	/* 조건의 순서가 중요 */

	//int num;
	//printf("숫자 입력 : "); scanf_s("%d", &num);
	//printf("num = %d\n", num);

	//if (num % 3 == 0)
	//	puts("num 은 3의 배수");
	//else if (num % 5 == 0)
	//	puts("num 은 5의 배수");
	//else if (num % 3 == 0 && num % 5 == 0)		// 이 조건이 처음에 나와야 오류 X
	//	puts("num 은 3의 배수이면서 5의 배수");
	//else
	//	puts("num 은 3의 배수도 5의 배수도 아니다");

	//int age;
	//printf("나이 입력 : ");		scanf_s("%d", &age);

	//if (age >= 20)
	//	puts("6000원 입니다");
	//else if (age >= 14)
	//	puts("7000원 입니다");
	//else if (age >= 7)
	//	puts("3000원 입니다");
	//else if (age >= 0)
	//	puts("무료입니다");

	int s1, s2, s3, sum;
	double avg;

	printf("점수 입력 : "); scanf_s("%d %d %d", &s1, &s2, &s3);
	sum = s1 + s2 + s3;
	avg = sum / 3;
	char grade;

	if (100 >= avg && avg >= 90) {
		grade = 'A';
	}
	else if (avg >= 80) {
		grade = 'B';
	}
	else if (avg >= 70) {
		grade = 'C';
	}
	else if (avg >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	printf("당신의 학점은 %c 입니다\n", grade);
}