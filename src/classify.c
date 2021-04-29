/*
 *      Author: Thanh Van
 *  Created on: April 2021
 */

#include "../include/score.h"

void classification(int *marks, int *statistics){
	/* Count marks value for the final statistics table*/
	for(int i=0; i<MAX && marks[i]!=-1; i++){
		switch(marks[i]){
			case 0: statistics[0]++; break;
			case 1: statistics[1]++; break;
			case 2: statistics[2]++; break;
			case 3: statistics[3]++; break;
			case 4: statistics[4]++; break;
			case 5: statistics[5]++; break;
			default: break;
		}
	}
}
