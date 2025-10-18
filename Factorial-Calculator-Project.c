#include <stdio.h>
#include <windows.h>
#include <locale.h>



int main()

{
	//Girilen sayýnýn faktöriyelini while ile bulan kod.

	int sayi;
	int j=1;
	setlocale(LC_ALL,"Turkish");

	printf("Lütfen Faktöriyel Hesabý Ýçin Bir Sayý Giriniz: ");
	scanf("%d",&sayi);
	int i = sayi;

	while (1<i)
	{
		j=i*j;
		i--;
		printf("%d\n",j);
		usleep(400000);
	}	

	printf("Sonuc: %d",j);
	return 0;
}
