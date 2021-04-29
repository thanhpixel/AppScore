#include "score.h"

void evaluation(int *scores, int *marks){
	int i;

	for(i=0; i<MAX; i++){
		if(scores[i]>=0 && scores[i]<50) marks[i] = 0;
        else if(scores[i]>=50 && scores[i]<=60) marks[i] = 1;
        else if(scores[i]>60 && scores[i]<=70) 	marks[i] = 2;
        else if(scores[i]>70 && scores[i]<=85) 	marks[i] = 3;
		else if(scores[i]>85 && scores[i]<=95) 	marks[i] = 4;
		else if(scores[i]>95)					marks[i] = 5;
		else marks[i] = -1;
	}
}
