#include <stdio.h>
int main(){
	char ch;
	int col,row;
	scanf("%c %d %d",&ch,&col,&row);
	for (int r = 1; r <= row; r++){
		for (int i = 1; i <= col; i++){
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
