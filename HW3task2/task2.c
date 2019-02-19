/*
 * task2.c
 *
 *  Created on: 2019年2月17日
 *      Author: 111111
 */


#include <stdio.h>
int main(void){
	int years,x;
	double birthRate,deathRate,size;
	while ( size < 2){
	printf("enter The starting size of a population (not accept numbers less than 2 for the starting size) \n");
	fflush(stdout);
	scanf("%lf", &size);
	}
	printf("enter The annual birth rate (not accept negative numbers) \n");
	fflush(stdout);
	scanf("%lf", &birthRate);
	while ( birthRate < 0){
		printf("enter The annual birth rate (not accept negative numbers) \n");
		fflush(stdout);
		scanf("%lf", &birthRate);
		}
	printf("enter The annual death rate (not accept negative numbers) \n");
			fflush(stdout);
			scanf("%lf", &deathRate);
	while ( deathRate < 0){
			printf("enter The annual death rate (not accept negative numbers) \n");
			fflush(stdout);
			scanf("%lf", &deathRate);
			}
	printf("enter The number of years to display (not accept numbers less than 1 for) \n");
	fflush(stdout);
	scanf("%d", &years);
	while ( years < 1){
	printf("enter The number of years to display (not accept numbers less than 1 for) \n");
	fflush(stdout);
	scanf("%d", &years);
				}
	for(x=0; x<years; ++x){
		size = size + (birthRate*size)-(deathRate*size);
		printf("the population at the end of the year %d is ",x+1);
		printf(" %lf\n ",size);
	}
}
