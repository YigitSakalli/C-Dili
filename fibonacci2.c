#include<stdio.h>

int main() {
	// 1 1 2 3 5 8 13 21 34 55
	
	int sayi1 = 1;
	int sayi2 = 1;
	int i;
	int sonuc = 0;
	
	for(i=0; i<11; i++){
		
		sonuc = sayi1+ sayi2;
		sayi1=sayi2;
		sayi2=sonuc;
		
		
		printf("%d\n",sonuc);
		
		
		
		
		
	}
	
	return 0;
}
