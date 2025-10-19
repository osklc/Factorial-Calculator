#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()

{

	int sayi;
	unsigned long long int faktoriyel_sonucu=1;
	const int MAX_FAKTORIYEL_SINIRI = 20;
	setlocale(LC_ALL,"Turkish");
	
	printf("Lütfen Faktöriyel Hesabý Ýçin 0-20 Arasýnda Bir Tam Sayý Giriniz (Ondalýk Sayýnýn Tam Kýsmý Kullanýlacaktýr): ");
	scanf("%d",&sayi);
	
	if(sayi==0 || sayi==1)
	{
		printf("--------------------------------");
		printf("\nSonuç: %llu",faktoriyel_sonucu);
		return 0;
	}
	
	if (sayi<0)
	{
		printf("--------------------------------");
		printf("\nLütfen Pozitif Bir Tam Sayý Giriniz!");
		return 1;
	}
	
	if (sayi>MAX_FAKTORIYEL_SINIRI)
	{
		printf("--------------------------------");
		printf("\nBu Program 20'den Büyük Sayýlarýn Faktöriyelini Alamaz!");
		return 1;
	}
	
	printf("--------------------------------\n");
	int i = sayi;
	while (1<i)
	{
		faktoriyel_sonucu=i*faktoriyel_sonucu;
		i--;
		printf("%llu\n",faktoriyel_sonucu);
		Sleep(100);
	}
		
	printf("--------------------------------");
	printf("\nSonuç: %llu",faktoriyel_sonucu);
	
	return 0;

}
