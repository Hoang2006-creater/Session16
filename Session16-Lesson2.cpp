#include<stdio.h>
//Ham hoan doi gia tri cua hai bien su dung con tro 
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
} 
int main(){
	//Khai bao va gan gia tri cho hai bien 
	int x = 1000,y=10;
	//In gia tri ban dau cua x va y 
	printf("Gia tri ban dau:\n");
	printf("x=%d, y = %d\n",x, y);
	//Goi ham swap de doi gia tri hai bien 
	swap(&x,&y);
	printf("Gia tri sau khi bien doi la :\n");
	printf("x=%d, y = %d\n",x, y);
	return 0;
	
}
