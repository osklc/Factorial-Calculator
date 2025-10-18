#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()

{
	//Girilen sayýnýn faktöriyelini while ile bulan kod.

	int sayi;
	unsigned long long int faktoriyel_sonucu=1;
	setlocale(LC_ALL,"Turkish");
	
	printf("Lütfen Faktöriyel Hesabý Ýçin Pozitif Bir Tam Sayý Giriniz (Ondalýk Sayýnýn Tam Kýsmý Kullanýlacaktýr): ");
	scanf("%d",&sayi);
	printf("--------------------------------\n");
	
	int i = sayi;
	
	if (sayi<0)
	{
		printf("Lütfen Pozitif Bir Tam Sayý Giriniz!");
		return 1;
	}
	
	else if (sayi>20)
	{
		printf("Bu Program 20'den Büyük Sayýlarýn Faktöriyelini Alamaz!");
		return 1;
	}
	
	else
	{
		while (1<i)
		{
			faktoriyel_sonucu=i*faktoriyel_sonucu;
			i--;
			printf("%llu\n",faktoriyel_sonucu);
			Sleep(100);
		}
		
		printf("--------------------------------");
		printf("\nSonuç: %llu",faktoriyel_sonucu);
	
	}
	
	return 0;

}
