#include<stdio.h>
int main(){
	// Khai bao bien 
	int x = 10;
	//Khai bao mot con tro toi bien do 
	int *ptr= &x;
	//Cach 1 In gia tri va dia tri truc tiep qua bien
	printf("Cach 1:\n");
	printf("Gia tri cua x: %d\n",x);
	printf("Dia chi cua x: %p\n",&x);
	
	// Cach 2: In gia tri va dia chi qua con tro
	printf("Cach 2:\n");
	printf("Gia tri cua x: %d\n",*ptr);
	printf("Dia chi cua x: %p\n",ptr);
	
} 
