#include <stdio.h>

int main(void)
{
	char grade;
	printf("月 (1-12) > ");
	scanf("%c", &grade);
	switch (grade)
	{
		case '1':
		case '2':
		case '3':
			printf("冬です。");
			break;
		case '4':
		case '5':
		case '6':
			printf("春です。");
			break;
		case '7':
		case '8':
		case '9':
			printf("夏です。");
			break;
		case '10':
		case '11':
		case '12':
			printf("秋です。");
			break;
		default:
			printf("入力が正しくありません。\n");
			break;
	}
	return 0;
}