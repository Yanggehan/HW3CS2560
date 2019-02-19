/*
 * task4.c
 *
 *  Created on: 2019年2月17日
 *      Author: 111111
 */


#include <stdio.h>
int *reverseArray(int arr[],int size){
	int i = 0;
	int  * ra = malloc(sizeof(int)*size);
	for(i=0;i<size;++i){
			ra[i] = arr[size-i-1];
		}
	return ra;
	//int  *ra = malloc(sizeof(SqList(int)*size);
}
void printA(int arr[],int size){
	int i;
	for(i=0;i<size;++i){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void main() {
	int  num,i,temp,j;
	int size = 5;
	int arr[size];
	printf("enter your size array number \n");
	fflush(stdout);
	for(i=0;i<size;i++){
		scanf("%d", &num);
		arr[i]=num;
	}
	printf("original array :");
	printA(arr,5);
	int *ra = reverseArray(arr,5);
	printf("reversed array :");
	printA(ra,5);


}
