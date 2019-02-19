/*
 * task1.c
 *
 *  Created on: 2019年2月16日
 *      Author: 111111
 */

#include <stdio.h>
int main(void){
	int chooice,radius,length,width,height,base;
	double area;
	while ( chooice !=4){
	printf("1. Calculate the Area of a Circle\n");
	printf("2. Calculate the Area of a Rectangle\n");
	printf("3. Calculate the Area of a Triangle\n");
	printf("4. Quit\n");
	printf("Enter your choice (1-4): \n");
	fflush(stdout);
	scanf("%d", &chooice);
	switch(chooice){

	 	 case 1:
	 		printf("enter radius of the circle\n");
	 		fflush(stdout);
	 		 scanf("%d", &radius);
	 		 if(radius > 0)
	 		 {
	 			 area = 3.14159 * radius *radius;
	 			 printf("The area is %lf\n",area);
	 		 }
	 		 else
	 		 {
	 			printf("you put a negative number");

	 		 }
	 		break;
	 	 case 2:
	 		printf(" enter length and width of the rectangle\n");
	 		fflush(stdout);
	 			 		 scanf("%d", &length);
	 			 		scanf("%d", &width);
	 			 		 if(length > 0 && width > 0)
	 			 		 {
	 			 			 area = length *width;
	 			 			 printf("The area is %lf\n",area);
	 			 		 }
	 			 		 else
	 			 		 {
	 			 			printf("you put a negative number");
	 			 		 }
	 			 		break;
	 	 case 3:
	 		 		printf(" enter length of the triangle’s base and its height\n");
	 		 		fflush(stdout);
	 		 			 		 scanf("%d", &base);
	 		 			 		scanf("%d", &height);
	 		 			 		 if(base > 0 && height > 0)
	 		 			 		 {
	 		 			 			 area = height *base *0.5;
	 		 			 			 printf("The area is %lf\n",area);
	 		 			 		 }
	 		 			 		 else
	 		 			 		 {
	 		 			 			printf("you put a negative number");

	 		 			 		 }
	 		 			 		break;
	 	 case 4:

	 		 exit(0);
	 		 break;
	 	default:
	 		printf("you not enter 1, 2, 3, 4\n");
	 		break;


	 }
	}



}
