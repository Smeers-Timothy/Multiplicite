/**
 * @file main.c
 * @brief basic module allowing you to fill in an array
 * and call the .h functions
 * @author Smeers Timothy
 * @version 0.1
 * @date 27 march 2021
 */

#include <stdio.h>
#include "multiplicite.h"

int main(){

	int T [9] = {13 , 16 , 19 , 17 ,19 , 12 , 2, 4, 10};
	int max ;

	int occurrences = multiplicite(T, 9, &max);
	printf("%d - %d\n", occurrences, max);
}
