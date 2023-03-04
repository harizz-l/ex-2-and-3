#include<stdio.h>
void area_of_square();
int main(){
area_of_square();
return 0;
}
void area_of_square(){
float side,area;
printf("enter the length of a side of the square:"); 
scanf("%f",&side);
area=side*side;

printf("the area of the square is %f\n",area);
}
