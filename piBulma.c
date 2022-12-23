
#include<stdio.h>
 
int main (){
    int sayi;  // Kullanicidan dongunun sinirini aliyoruz.
    int i,j;
    double pi;  
 
    pi=0.0;   // pi'yi sifir olarak atiyoruz. 
    j=1;     // j 4/j olarak kullanacagiz.
    
    printf("bir sayi giriniz: ");
    scanf("%d",&sayi);   
    for(i=0; i<sayi; i++){       
        if(i%2==0){
            pi=pi+4.0/j    ;    
                        
        }    
        else{
            pi=pi-4.0/j;
        }
        j+=2;
    }
    printf("%f",pi);
    
    return 0;
}
