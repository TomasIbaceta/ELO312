/*
 * functions.c
 *
 *  Created on: 8 oct. 2019
 *      Author: Tomas
 */
#include "functions.h"


unsigned int multiply_pow_2_v1 (unsigned int number, unsigned int power){
	return number << power;
}


unsigned int multiply_pow_2_v2 ( unsigned int number , unsigned int power ){
    int i;
        for (i=0 ; i<power ; i++){
            number = number * 2;
        }
    return number;
}
