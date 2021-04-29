#include "score.h"

void input_scores(int *score){
	int input=0;

	printf("Enter Score, -1 to end:\n");
	for (int i=0; i<MAX && input!=-1; i++){
		printf("%d: ", i+1);
		scanf("%d", &input);
		score[i]=input;
	}
}
