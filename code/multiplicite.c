/**
 * @file multiplicite.c
 * @brief Source file allowing to integrate the sorting functions of the array
 * @author Smeers Timothy
 * @version 0.1
 * @date 27 march 2021
 */
#include <stdio.h>
#include <assert.h>
#include "multiplicite.h"

int multiplicite ( int *T , const int N , int *max ) {
	assert(T != NULL && N > 0);

	unsigned int i = 0;
	unsigned int j = N-1;
	unsigned int occurence = 0;
	*max = T[0];

	while (i <= j) {

		if (T[i] > *max || T[j] > *max){
			if( T[i] == T[j]){
				*max = T[i];
				occurence = 2;

			}else if(T[i] > T[j]){
				*max = T[i];
				occurence = 1;
			}else{
				*max = T[j];
				occurence = 1;
			}

		}else if(*max == T[i] || *max == T[j]){
			if(i == j)
				occurence++;
			else if(T[i] == T[j])
				occurence +=2;
			else
				occurence++;
		}
		i++;
		j--;
	}
	return(occurence);
}

