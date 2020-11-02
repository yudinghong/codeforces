#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char names[100] = "";
	int a = 97;
	scanf("%s", names);
	int namesLen = strlen(names);
	int result = 0;
	int i = 0;
	char preChar = 'a';
	for(; i<namesLen; i++){
		int min = (int)preChar < (int)names[i] ? (int)preChar : (int)names[i];
		int max = (int)preChar > (int)names[i] ? (int)preChar : (int)names[i];
		result += max-min < min+26-max ? max-min : min+26-max;
		preChar = names[i];
	}
	printf("%d\n", result);
	return 0;
}