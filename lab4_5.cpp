#include <stdio.h>
int main(){
	char ch;
	int n;
	scanf("%c %d",&ch,&n);
	for (int i = 1; i <= n; i++){
		printf("%c",ch);
	}
	return 0;
}
