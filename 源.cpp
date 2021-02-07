//此过程将覆盖第一个参数的结束符 '\0'
#include<stdio.h>
#include<string.h>

int main()

{
	char str1[100] = "I LOVE U";
	char str2[] = "Wu Jing";

	strcat_s(str1, " ");
	strcat_s(str1, str2);

	printf("str1:%s\n", str1);

	return 0;

}
