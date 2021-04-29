#include "score.h"

void output_results(int *marks,int * statistics){
	    for(int i=0; i<MAX; i++){
        printf("Student number %i - Grade: %d\n", i+1, marks[i]);
    }
    
    printf("\n*****___Statistics___*****\n");
    for(int i=0; i<6; i++){
        printf("Grade %d: %d\n", i, statistics[i]);
    }

}
