#include <iostream>
using namespace std;

/*

(Eratosthenes elegi) Sadece kendisine ve bire tam olarak b�l�nebilen sayilara asal sayilar 
denir. Eratosthenes elegi, bir asal sayilari bulma metodudur. Su sekilde �alisir:

1) B�t�n elemanlarinin ilk degerleri 1(dogru) olan bir dizi olusturun. Belirte�leri asal 
sayi olan dizi elemanlarinin degeri 1, digerleri ise 0 olacaktir.

2) Belirteci 2 olan elemandan baslayarak (belirteci 1 olan eleman mutlaka asal 
olmalidir.) , degeri 1 olan bir eleman her zaman bulunabilir. Dizinin kalaninda 
d�ng� ile ilerleyin ve belirteci, degeri 1 olan bir elemanin belirtecinin kati olan dizi 
elemanlarina 0 atayin. Belirteci 2 olan eleman i�in 2�nin ilerisinde 2�nin kati olan 
b�t�n dizi elemanlarinin (belirteci 4, 6, 8, 10 vs.) degeri 0 olmalidir. Belirteci 3 olan 
eleman i�in 3��n ilerisinde 3��n kati olan b�t�n dizi elemanlarinin(belirteci 6, 9, 12, 
15 vs.) degeri 0 olmalidir. 
Bu islem bittiginde belirtec bilgisi asal olan elemanlarin degerleri 1 olarak kalir. Bu 
belirte�ler ekrana yazdirilabilir.1000 elemani olan bir diziyi kullanarak 1 den 999 a 
kadar olan sayilarin i�inde asal olanlarini bulan bir program yaziniz. Eleman 0�i 
ihmal ediniz.


*/


int main()
{
	int sayilar[1000],i;
	bool asalMi=true;
	while(i<1000)
		sayilar[i++]=1;  // ilk olarak tum elemanlari 1 yapmak
		
	for(int i=2;i<1000;i++){		//degeri 1 olan belirtecin, belirtec katlarinin degerlenin hep 0 yapar
			if(sayilar[i]==1)
				for(int k=i*2;k<1000;k+=i)
					sayilar[k]=0;
			
		
		
	}
	for(int i=1;i<1000;i++){		//degeri 1 olan elemanin dizi belirticindeki sayiyi yazar.
		if(sayilar[i]==1)
			cout << i << endl;
	}
	
	
	return 0;
}

