#include<stdio.h>


int main() {
	
	int ilkSayi = 1;
	int ikinciSayi = 1;
	int i;
	
	printf("%d\n%d\n",ilkSayi,ikinciSayi);
	
	for(i = 0; i < 12; i++) {
		
		int temp = ikinciSayi;
		ikinciSayi += ilkSayi;
		ilkSayi = temp,
		
		printf("%d\n",ikinciSayi);
	}
	
	return 0;
}







