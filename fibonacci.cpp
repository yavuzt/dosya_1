#include<stdio.h>

int fibonacci (int n){
	int F1,F2,F;
	F1 = 0;
	F2 = 1;
	
	for(int i =2; i <= n; i++){
		F = F1 + F2;
		F1 = F2;
		F2 = F;
		}
	return F;
	
}

int main(){
	int n;
	printf("n degerini girin : ");
	scanf ("%d", &n);	
	
	int A[n];
	for(int i = 2; i <= n; ++i){
	A[i] = fibonacci (i);
	printf("%d  ", A[i]);	
	}
}
