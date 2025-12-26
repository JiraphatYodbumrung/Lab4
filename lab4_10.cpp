
#include <stdio.h>
int main(){
	int score;
	int ca,cb,cc,cd,cf;
	while(1){
		scanf("%d",&score);
		if(score == -1){
			break;
		}
		if(score < 0){
			printf("error score");
		} else if(score > 100){
			printf("error score\n");
		}
		else{
			if(score >= 68){
				if(score >= 85){
					printf("A\n");
					ca++;
				} else if(score >= 75){
					printf("B\n");
					cb++;
				} else{
					printf("C\n");
					cc++;
				}
			}
			else{
				if(score >= 55){
					printf("D\n");
					cd++;
				} else{
					printf("F\n");
					cf++;
				}
			}
		}
	}
	printf("A(%d)\n",ca);
	printf("B(%d)\n",cb);
	printf("C(%d)\n",cc);
	printf("D(%d)\n",cd);
	printf("F(%d)\n",cf);
	return 0;
}

