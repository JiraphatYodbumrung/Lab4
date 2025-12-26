#include <stdio.h>
int main(){
	char ch;
	int n;
	scanf("%c %d",&ch,&n);
	for (int r = 1; r <= n; r++){
		for (int i = 1; i <= n; i++){
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
