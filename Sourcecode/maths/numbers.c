#include<stdio.h>
#include<math.h>
int sum(int x,int y){
<<<<<<< HEAD
=======
//in bugfix
	int result=0;
	result=x+y;

	return result;}
>>>>>>> bugfix
int diff(int x,int y){
	//changed in master
	int result =0;
	result =x-y;
	return result}
//added in testing branch	
int mul(int x,int y){
	return x*y;}
int div(int x,int y){
	if(y!=0)
	return x/y;
	else
	printf("divide by 0");}
int main{
printf(pow(2,3);}
