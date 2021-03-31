/**
 * @file multiplicite.h
 * @brief Header file allowing to integrate the function prototypes of the multiplicite.h
 * @author Smeers Timothy
 * @version 0.1
 * @date 27 march 2021
 */

#ifndef MULTIPLICITE_H_
#define MULTIPLICITE_H_

/**
 * @fn int multiplicite(int*, const int, int*)
 * @brief Obtain, for T, the greatest value of T as well as the number
 * of occurrences of this value in T.
 *
 * @pre T != NULL && N > 0
 * @post T = T0 && N = N0 && max != 0 && occurence > occurence0
 * 		 max contains the value of the largest number present in T [N]
 * 		 occurrence contains the number of occurrences of max present in T [N]
 * @param T an array with N integer values
 * @param N table size T
 * @param max contains the value of the largest number present in T [N]
 * @return The number of occurrences of the maximum in T.
 */
int multiplicite ( int *T , const int N , int *max );

#endif MULTIPLICITE_H_
