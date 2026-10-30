#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char text[100];
	int key;

	printf("문자열 입력(대문자, 띄어쓰기 없이): ");
	scanf("%99s", text);
	printf("미는 칸 수: ");
	scanf("%d", &key);

	for (int i = 0; text[i] != '\0'; i++) {
		text[i] = 'A' + (text[i] - 'A' + key) % 26;
	}
	printf("암호화: %s\n", text);
	return 0;
}