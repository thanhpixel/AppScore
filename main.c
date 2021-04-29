#include "stdio.h"
#include "score.h"

#define MAX 30

void main(){
	int scores[MAX] = {0}, marks[MAX] = {0};
	int statistics[6];

	input_scores(scores);
	for(int i=0; i<MAX; i++){
		printf("Score at %d: %d\n", i+1, scores[i]);
	}
//	evaluation(scores, marks);
//	classification(marks, statistics);
//	output_results(marks, statistics);
}
