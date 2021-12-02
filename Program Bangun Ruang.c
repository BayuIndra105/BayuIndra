#include <stdio.h>

float phi = 3.14;
void volume_kubus();
void luas_permukaan_kubus();
void volume_balok();
void luas_permukaan_balok();
void volume_bola();
void luas_permukaan_bola();

main()
{
int list; menu:
printf("-> MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN-BANGUN RUANG <- \n");
printf("====================================================================== \n");
printf("Silakan Tentukan Volume Yang Akan Dicari! \n");
printf("1. Volume Kubus\n 2. Luas Permukaan Kubus\n 3. Volume Balok\n 4. Luas Permukaan Balok \n 5. Volume Bola \n 6. Luas Permukaan Bola \n 0. Keluar dan Selesai\n");
printf("Masukkan Pilihan Anda (0/1/2/3/4/5/6): ");
scanf("%d", &list);
printf("********************************** \n");

switch(list)
{
case 1: volume_kubus(); goto menu; break;
case 2: luas_permukaan_kubus(); goto menu; break;
case 3: volume_balok(); goto menu; break;
case 4: luas_permukaan_balok(); goto menu; break;
case 5: volume_bola(); goto menu; break;
case 6: luas_permukaan_bola(); goto menu; break;
case 0: printf("Terima Kasih!");
	}
}

void volume_kubus() {
int sisi, volume;
printf("Menghitung Volume Kubus \n");
printf("Masukkan Angka: \n");
	printf("\tSisi: "); 
		scanf("%d", &sisi);
volume = sisi * sisi * sisi;
printf("Volume Kubus = Sisi x Sisi x Sisi \n");
printf("Volume Kubus = %d \n", volume);
printf("\n");
}

void luas_permukaan_kubus() {
int sisi, luas_permukaan;
printf("Menghitung Luas Permukaan Kubus \n");
printf("Masukkan Angka: \n");
	printf("\tSisi: "); 
		scanf("%d", &sisi);
luas_permukaan = sisi * sisi;
printf("Luas Permukaan Kubus = Sisi x Sisi \n");
printf("Luas Permukaan Kubus = %d \n", luas_permukaan);
}

void volume_balok() {
int panjang, lebar, tinggi , volume;
printf("Menghitung Volume Balok \n");
printf("Masukkan Angka: \n");
	printf("\tPanjang: "); 
		scanf("%d", &panjang);
	printf("\tLebar: "); 
		scanf("%d", &lebar);
	printf("\tTinggi: "); 
		scanf("%d", &tinggi);
volume = panjang * lebar * tinggi;
printf("Volume Balok = Panjang x Lebar x Tinggi \n");
printf("Volume Balok = %d \n", volume);
printf("\n");
}

void luas_permukaan_balok() {
int panjang, lebar, tinggi, luas_permukaan;
printf("Menghitung Luas Permukaan Balok \n");
printf("Masukkan Angka: \n");
	printf("\tPanjang: "); 
		scanf("%d", &panjang);
	printf("\tLebar: "); 
		scanf("%d", &lebar);
	printf("\tTinggi: "); 
		scanf("%d", &tinggi);
luas_permukaan = 2 * (panjang * lebar) + 2 * (panjang * tinggi) + 2 * (lebar * tinggi);
printf("Volume Balok = 2 x (Panjang x Lebar) + 2 x (Panjang x Tinggi) + 2 x (Lebar x Tinggi) \n");
printf("Volume Balok = %d \n", luas_permukaan);
printf("\n");
}

void volume_bola() {
float r, volume;
printf("Menghitung Volume Bola \n");
printf("Masukkan Angka: \n");
	printf("\tJari-Jari: "); 
		scanf("%f", &r);
volume = 4*phi*(r*r*r)/3;
printf("Volume Bola = 4 x Phi x (r x r x r) / 3 \n");
printf("Volume Bola = %.2f \n", volume);
printf("\n");
}

void luas_permukaan_bola() {
float r, luas_permukaan;
printf("Menghitung Volume Bola \n");
printf("Masukkan Angka: \n");
	printf("\tJari-Jari: "); 
		scanf("%f", &r);
luas_permukaan = 4*phi*(r*r);
printf("Volume Bola = 4 x Phi x (r x r) \n");
printf("Volume Bola = %.2f \n", luas_permukaan);
printf("\n");
}
