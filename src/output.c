/*
 *		Author: Thanh Van
 *	Created on: April 2021
 */

#include "../include/score.h"

void output_results(int *marks,int * statistics){
	/* Print list of student with grade */
	printf("\n*****___Student evaluation___*****\n");
	for(int i=0; i<MAX && marks[i]!=-1; i++){
        printf("Student number %i - Grade: %d\n", i+1, marks[i]);
    }

	/* Print course statistic */
    printf("\n*****___Statistics___*****\n");
    for(int i=0; i<6; i++){
        printf("Grade %d: %d\n", i, statistics[i]);
    }
}
