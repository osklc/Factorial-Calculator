#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()

{
	//Girilen say�n�n fakt�riyelini while ile bulan kod.

	int sayi;
	unsigned long long int faktoriyel_sonucu=1;
	setlocale(LC_ALL,"Turkish");
	
	printf("L�tfen Fakt�riyel Hesab� ��in Pozitif Bir Tam Say� Giriniz (Ondal�k Say�n�n Tam K�sm� Kullan�lacakt�r): ");
	scanf("%d",&sayi);
	printf("--------------------------------\n");
	
	int i = sayi;
	
	if (sayi<0)
	{
		printf("L�tfen Pozitif Bir Tam Say� Giriniz!");
		return 1;
	}
	
	else if (sayi>20)
	{
		printf("Bu Program 20'den B�y�k Say�lar�n Fakt�riyelini Alamaz!");
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
		printf("\nSonu�: %llu",faktoriyel_sonucu);
	
	}
	
	return 0;

}
