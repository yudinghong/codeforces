#include <stdio.h>

int main(){
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 0 && num > 2){
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}