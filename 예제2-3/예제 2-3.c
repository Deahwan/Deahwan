#include<stdio.h>

int main(void)
{
	printf("Be happy!\n"); //Be happy를 출력학고(\n)으로 줄바꿈
	printf("12345678901234567890\n");//번호를 출력학고(\n)으로 줄바꿈
	printf("My\tfriend\n");
	//My를 출력하고 탭 위치를 이동(\t)후에 friend를 출력후(\n)을 줄바꿈
	printf("Goot\bd\tchance\n");
	// t를 d로 바꾸고 탭 위치로 이동 (\t) 후에 chance를 출력하고 줄 바꿈(\n)
	printf("Cow\rW\a\n");
	// 맨 앞으로 이동 (\r)해 C 를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈 (\n)

	return 0;
}