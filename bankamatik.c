#include<stdio.h>

int main() {
	
	int sifre;
	int kullaniciSifresi;
	int islem;
	int bakiye = 1500;
	int tutar;
	
	sifre = 3737;
	
	printf("Sifrenizi Giriniz:");
	scanf("%d",&kullaniciSifresi);
	
	if(sifre == kullaniciSifresi) {
		printf("Sifre Dogru...\n\n");
		printf("Islemler:\n1:Bakiye Sorgulama\n2:Para Yatirma\n3:Para Cekme\n4:Havale\n5:Kart Iade\n\n\n");
		printf("Islemi Seciniz:");
		scanf("%d",&islem);
		
		switch(islem){
			
			case 1:
				printf("Bakiyeniz:%d",bakiye);
				break;
				
		
		    case 2:
				printf("Bakiyeniz:%d\n",bakiye);
				printf("Yatirilacak Tutar:");
				scanf("%d",&tutar);
				
				bakiye += tutar;
				printf("Yeni Bakiyeniz:%d",bakiye);
				break;
				
				
			case 3:
			    printf("Bakiyeniz:%d\n",bakiye);
				printf("Cekilecek Tutari Giriniz:");
				scanf("%d",&tutar);
					
			    if(tutar > bakiye) {
			    	printf("Yetersiz Bakiye.");
				}
				else {
					bakiye -= tutar;
					printf("Yeni Bakiyeniz:%d",bakiye);
				}
				
				break;
				
				
			case 4:
				printf("Bakiyeniz:%d\n",bakiye);
				printf("Havale Edilecek Tutar:");
				scanf("%d",&tutar);
				
				if(tutar > bakiye) {
					printf("Yetersiz Bakiye.");
				}
				else {
					bakiye -= tutar;
					printf("Yeni Bakiyeniz:%d",bakiye);
				}
				
				break;
				
				
			case 5:
				printf("Kart Iade Edildi");
				break;
				
		}
		
		
	}
	else {
		printf("Sifre Yanlis");
	}
		
	return 0;
}
