#include <iostream>
using namespace std;


/*
(Hanoi�nin kuleleri) B�t�n bilgisayar bilimcileri mutlaka bazi klasik problemlerle ugrasmislardir. 
Bunlarin en �nl�s� Hanoi'nin kuleleridir. Bir efsaneye g�re uzak dogudaki 
din adamlari bir grup diski bir �ubuktan digerine tasimaya �alismaktadirlar.
Ilk grupta 64 disk vardir ve �ubuga an altta en b�y�k disk olmak �zere b�y�kten k���ge dogru dizilmislerdir. 
Din adamlari bu diskleri ilk �ubuktan digerine, her seferinde yalniz bir disk tasimak ve k���k 
diskin �zerine hi� bir zaman b�y�k disk koymamak kosuluyla tasimak zorundadirlar. 
���nc� bir �ubuk ise diskleri ge�ici olarak tasimak i�in kullanilmaktadir. Din adamlari bu isi 
bitirdiginde d�nyanin sonu gelecektir. 
Din adamlarinin diskleri birinci �ubuktan ���nc� �ubuga tasiyacaklarini kabul edelim ve her 
diskin transferi i�in bir algoritma yazalim. 
Eger bu probleme klasik y�ntemlerle yaklasacak olursak diskleri tasimada hemen �mitsizlige 
d�seriz ama probleme yineleme mantigiyla yaklasacak olursak problem daha ��z�lebilir bir 
hale gelecektir.
 n tane diski tasimak n-1 tane diski tasimak gibi asagidaki gibi d�s�n�lebilir.
1. n - 1 diski 1. �ubuktan 2. �ubuga, 3 �ubugu ge�ici olarak kullanarak tasi
2. en son(en b�y�k) diski 1. �ubuktan 3. �ubuga tasi
3. n-1 diski 2. �ubuktan 3. �ubuga 1. �ubugu ge�ici olarak kullanarak tasi.
Islem, son g�rev olan n = 1 diskide tasindiginda biter. Bu g�rev ise ge�ici bir �ubuk kullanilmadan basarilir.
Hanoi'nin kuleleri problemini ��zen bir program yaziniz. Yineleme fonksiyonunu d�rt 
parametre ile kullaniniz.
1. Tasinacak disk sayisi
2. Disklerin ilk bulundugu �ubuk
3. Disklerin tasinacagi �ubuk
4. Disklerin tasinmasinda kullanilacak ge�ici �ubuk

*/

void hanoi(int n,int baslangic, int ara,int bitis){
	if(n==1){
		cout<< baslangic <<" numarali cubuktan "<<bitis<<" numarali cubuga yerlestir\n";
		return;		//Islem bitisi cunku son disk tasindi
	}
	hanoi(n-1,baslangic,ara,bitis);
	hanoi(1,baslangic,bitis,ara);
	hanoi(n-1,ara,bitis,baslangic);
		
}

int main(){
	
int disk,cubuk1(1),cubuk2(2),cubuk3(3);// degerleri kacinci cubuk oldugunu gosterir.
cout<< "cubuk1 disklerin oldugu cubuktur.\ncubuk3 disklerin tasinmak istendigi cubuktur.\ncubuk2 gecici olarak kullanilan cubuktur.\n";
cout<< "Disk sayisini giriniz.\n";
cin>>disk;
hanoi(disk,cubuk1,cubuk2,cubuk3);
	






}
