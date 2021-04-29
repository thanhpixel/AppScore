/*
 *      Author: Thanh Van
 *  Created on: April 2021
 */

#include "include/score.h"

void main(){
	int scores[MAX] = {0}, marks[MAX] = {0};
	int statistics[6] = {0};

	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);
}
