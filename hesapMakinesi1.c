#include<stdio.h> 

int main() {
	int sayi1, sayi2, islem, sonuc;

	
	
	printf("1. sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2.saiyi giriniz:");
	scanf("%d",&sayi2);
	printf("1:carpma\n2:bolme\n3:toplama\n4:cikarma");
	printf("\n\n\nyapmak istedigniz islemi giriniz:");
	scanf("%d",&islem);

	switch(islem){
		
		case 1:
			sonuc = sayi1 / sayi2;
			printf("%d",sonuc);
			break;
			
			
		case 2:
			sonuc = sayi1 / sayi2;
			printf("%d",sonuc);
			break;
		
			
		case 3:
			sonuc = sayi1 + sayi2;
			printf("%d",sonuc);
			break;
		
			
	 	case 4:
	 	sonuc = sayi1 - sayi2;
			printf("%d",sonuc);
			break;
	}
	
	return 0;
}                                                                                                                                                       
