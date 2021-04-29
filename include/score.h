/*
 *      Author: Thanh Van
 *  Created on: April 2021
 */

#include <stdio.h>

/* 
 *	Description: max number of student in class
 */
#define MAX 30

/*
 *	Function: void input_scores(int *scores);
 *	Desciption: get input from user
 */
void input_scores(int *scores);

/*
 *  Function: void evaluation(int *scores, int *marks);
 *  Desciption: evaluate the input
 */
void evaluation(int *scores, int *marks);

/*
 *  Function: void classification(int *marks, int *statistics);
 *  Desciption: classify the input base on the evaluation
 */
void classification(int *marks, int *statistics);

/*
 *  Function: void output_results(int *marks, int *statistics);
 *  Desciption: print result
 */
void output_results(int *marks, int *statistics);

