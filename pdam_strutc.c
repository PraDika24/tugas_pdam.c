#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BIAYA_ADM 50.00
#define TERLAMBAT 3000
#define jatuh_tempo 20


int validInt(int *var){
	char buff[1020];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
}
void reVldInt(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(validInt(var)) {
			break;
		}
		printf("Input hanya boleh  berupa angka!! \n");
		printf("\n");
	}
}
// program prosedur

//--------------------------------------RUMAH Subsidi------------------------------------------------------------

void D11() { //Isi Program Pemilihan 1 pada D1
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D1-1\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*1780;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 2060;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 5880;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda   : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda     : Rp %.2f\n",denda);
    }
 }

time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}
printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga                                                                \n");
fprintf(file, "\t|Golongan       | D1-1                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void D12() { //Isi Program Pemilihan 2 pada D1
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D1-2\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 2060;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 2340;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 5940;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}
printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga                                                                \n");
fprintf(file, "\t|Golongan       | D1-2                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void D21() { //Isi Program Pemilihan 1 pada D2
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D2-1\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 2340;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 2620;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 6000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }
time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}
printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");

fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga                                                                \n");
fprintf(file, "\t|Golongan       | D2-1                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void D22() { //Isi Program Pemilihan 2 pada D2
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D2-2\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 2620;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 2900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 6060;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga                                                                \n");
fprintf(file, "\t|Golongan       | D2-2                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void D31() { //Isi Program Pemilihan 1 pada D3
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D3-1\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 2900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 3180;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 6120;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga                                                                \n");
fprintf(file, "\t|Golongan       | D3-1                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D32() { //Isi Program Pemilihan 2 pada D3
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D3-2\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 3180;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 3460;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 6180;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D3-2                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");



}

void D41() { //Isi Program Pemilihan 1 pada D4
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-1\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 3460;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 3740;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 6240;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga                                                                \n");
fprintf(file, "\t|Golongan       | D4-1                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D42() { //Isi Program Pemilihan 2 pada D4
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-2\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 3740;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 4020;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 6300;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga                                                                \n");
fprintf(file, "\t|Golongan       | D4-2                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}


//--------------------------------------RUMAH Non Subsidi------------------------------------------------------------
void D13() { //Isi Program Pemilihan 1 pada D1 non subsidi
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D1-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 6340;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 9200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 9600;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D1-3                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D14() { //Isi Program Pemilihan 2 pada D1 non subsidi
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D1-4\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 6420;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 9350;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 9650;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D1-4                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void D23() { //Isi Program Pemilihan 1 pada D2 ru,ah non subsidi
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D2-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 6490;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 9500;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 9800;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D2-3                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D24() { //Isi Program Pemilihan 2 pada D2 non subsidi
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D2-4\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 6570;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 9650;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 9950;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D2-4                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D33() { //Isi Program Pemilihan 1 pada D3 non subsidi
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D3-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 6640;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 9800;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 10100;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D3-3                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void D34() { //Isi Program Pemilihan 2 pada D3 non subsidi
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D3-4\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian *6720 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 9950;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 10250;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D3-4                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void D43() { //Isi Program Pemilihan 2 pada D4
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 6790;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10100;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 10400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D4-3                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D44() { //Isi Program Pemilihan 2 pada D4 non subsisdi
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 6870;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10250;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 10550;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D4-4                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D51() { //Isi Program Pemilihan 1 pada D5
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D5-1\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 6940;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 10700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D5-1                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void D52() { //Isi Program Pemilihan 2 pada D5
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D5-2\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 7020;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10550;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 10850;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D5-2                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D53() { //Isi Program Pemilihan 2 pada D4
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D5-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 7090;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 11000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D5-3                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void D54() { //Isi Program Pemilihan 4 pada D5
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D5-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 7170;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10850;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 11150;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Rumah Tangga Non Subsidi                                                    \n");
fprintf(file, "\t|Golongan       | D5-4                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

//--------------------------------------USAHA/NIAGA------------------------------------------------------------


void E11() { //Isi Program Pemilihan 1 pada E1
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E1-1\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 9200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 9850;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 10950;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E1-1                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void E12() { //Isi Program Pemilihan 2 pada E1
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E1-2\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 9500;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10150;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 11250;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E1-2                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void E13() { //Isi Program Pemilihan 3 pada E1
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E1-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 9800;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10450;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 11550;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E1-3                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void E14() { //Isi Program Pemilihan 4 pada E1
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E1-4\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 10100;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 10750;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 11850;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E1-4                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void E21() { //Isi Program Pemilihan 1 pada E2
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E2-1\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 10400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 11050;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 12150;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E2-1                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void E22() { //Isi Program Pemilihan 2 pada E2
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E2-2\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 10700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 11350;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 12550;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E2-2                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void E23() { //Isi Program Pemilihan 3 pada E2
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E2-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 11000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 11650;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 13150;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E2-3                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void E24() { //Isi Program Pemilihan 4 pada E2
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E2-4\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 11300;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 11950;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 13950;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E2-4                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void E31() { //Isi Program Pemilihan 1 pada E3
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E3-1\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 11600;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 12250;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 14750;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E3-1                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void E32() { //Isi Program Pemilihan 2 pada E3
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E3-2\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 11900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 12550;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 15050;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E3-2                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

void E33() { //Isi Program Pemilihan 3 pada E3
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E3-3\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 12200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 12850;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 15850;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E3-3                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");


}

void E34() { //Isi Program Pemilihan 4 pada E3
char nama[100];
char username[50];
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN E3-4\n");
printf("=============================================================================================\n");
printf_s("Masukan Username  : ");
gets(username);
printf_s("Masukan Nama Anda : ");
gets(nama);
printf("=============================================================================================\n");
reVldInt(&pemakaian_lalu,"Masukkan jumlah pemakaian bulan lalu (dalam m3)    : ");
reVldInt(&pemakaian_ini,"Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian * 12500;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = besar_pemakaian * 13150;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if (besar_pemakaian<21 || besar_pemakaian>10)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
     }
 }
 else
 {
 biaya = besar_pemakaian * 16650;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
    if(besar_pemakaian>20 && besar_pemakaian<100)
    {
    denda = 10.00;
    printf("Denda : Rp %.2f\n",denda);
    }
    else
    {
      denda = 20.00;
      printf("Denda : Rp %.2f\n",denda);
    }
 }

 time_t t;
t = time (NULL);
struct tm tm = *localtime(&t);
float denda_terlambat;
if((tm.tm_mday-jatuh_tempo)<=0){
    denda_terlambat = 0;
}
else {
    denda_terlambat = TERLAMBAT;
}

printf("Denda Terlambat     : Rp %.2f\n",denda_terlambat);
printf("BPM                 : Rp %.2f\n",bpm);
printf("Biaya Administrasi  : Rp %.2f\n",BIAYA_ADM);
printf("Total               : Biaya Adminitrasi + BPM + Biaya Pemakaian Bulan Ini + Denda + Denda Terlambat\n");
printf("Total               : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f  + %.2f = Rp %.2f\n", BIAYA_ADM,bpm,biaya,denda,denda_terlambat,BIAYA_ADM+bpm+biaya+denda+denda_terlambat);
printf("=============================================================================================\n");
printf("                         Terima Kasih sudah Menggunakan Program Ini                           \n");
printf("           Silahkan Tekan Enter Untuk Melanjutkan Proses Pencetakan Bukti Pembayaran          \n");
printf("=============================================================================================\n");

FILE *file;
file=fopen("pdamcostumer.txt", "w+");


fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|                     ----------------BUKTI PEMBAYARAN-------------------                     |\n");
fprintf(file, "\t|=============================================================================================|\n");
fprintf(file, "\t|Tanggal Bayar  | %d-%d-%d                                                                    \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Jatuh tempo    | %d-%d-%d                                                                    \n", jatuh_tempo, tm. tm_mon+1, tm.tm_year+1900);
fprintf(file, "\t|Username       | %s                                                                          \n", username);
fprintf(file, "\t|Nama           | %s                                                                          \n", nama);
fprintf(file, "\t|Kelompok       | Niaga/Usaha                                                                 \n");
fprintf(file, "\t|Golongan       | E3-4                                                                        \n");
fprintf(file, "\t|Penggunaan Air | %.2f                                                                        \n", besar_pemakaian);
fprintf(file, "\t|Tarif          | %.2f                                                                        \n", biaya);
fprintf(file, "\t|BPM            | %.2f                                                                        \n", bpm);
fprintf(file, "\t|Denda 1        | %.2f                                                                        \n", denda);
fprintf(file, "\t|Denda Terlambat| %.2f                                                                        \n", denda_terlambat);
fprintf(file, "\t|Adminitrasi    | %.2f                                                                        \n", BIAYA_ADM);
fprintf(file, "\t==============================================================================================|\n");
fprintf(file, "\t                |Total = Rp. %.2f                                                              \n", (biaya + bpm + denda + denda_terlambat + BIAYA_ADM));
fprintf(file, "\t==============================================================================================|\n");

}

// Program Pemilihan Case pada D1
void rumah1() { //D1
int menu;
printf("\n");
printf("====================================================\n");
printf("           MENGHITUNG BIAYA PDAM RUMAH A1\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan rumah\n");
printf("1. 450VA Gol: D1-1\n");
printf("2. 900VA Gol: D1-2\n");
printf("3. 1.300VA Gol: D1-3\n");
printf("4. >1.300VA Gol: D1-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D11();
		break;
	case 2:
		D12();
		break;
    case 3:
		D13();
		break;
    case 4:
		D14();
		break;
	default:
	   printf("input yang anda masukan salah, input 1-4");
	   break;
}
}


// Program Pemilihan Case pada D2
void rumah2() { // D2
int menu;
printf("\n");
printf("====================================================\n");
printf("       MENGHITUNG BIAYA PDAM RUMAH A2\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan rumah\n");
printf("1. 450VA Gol: D2-1\n");
printf("2. 900VA Gol: D2-2\n");
printf("3. 1300VA Gol: D2-3\n");
printf("4. >1300VA Gol: D2-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D21();
		break;
	case 2:
		D22();
		break;
    case 3:
		D23();
        break;
    case 4:
		D24();
		break;
	default:
	   printf("input yang anda masukan salah, input 1-4");
	   break;
}
}


// Program Pemilihan Case pada D3
void rumah3() { // D3
int menu;
printf("\n");
printf("====================================================\n");
printf("        MENGHITUNG BIAYA PDAM RUMAH A3\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan rumah\n");
printf("1. 450VA Gol: D3-1\n");
printf("2. 900VA Gol: D3-2\n");
printf("3. 1300VA Gol: D3-3\n");
printf("4. >1300VA Gol: D3-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D31();
		break;
	case 2:
		D32();
		break;
    case 3:
		D33();
		break;
    case 4:
        D34();
        break;
	default:
	   printf("input yang anda masukan salah, input 1-4");
	   break;
}
}


// Program Pemilihan Case pada D4
void rumah4() { // D4
int menu;
printf("\n");
printf("====================================================\n");
printf("        MENGHITUNG BIAYA PDAM RUMAH A4\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan rumah\n");
printf("1. 450VA Gol: D4-1\n");
printf("2. 900VA Gol: D4-2\n");
printf("3. 1300VA Gol: D4-3\n");
printf("4. >1300VA Gol: D4-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D41();
		break;
	case 2:
		D42();
		break;
    case 3:
        D43();
        break;
    case 4:
        D44();
        break;
	default:
	   printf("input yang anda masukan salah, input 1-4");
	   break;
}
}

// Program Pemilihan Case pada D5
void rumah5() { // 55
int menu;
printf("\n");
printf("====================================================\n");
printf("        MENGHITUNG BIAYA PDAM RUMAH B\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan rumah\n");
printf("1. 450VA Gol: D5-1\n");
printf("2. 900VA Gol: D5-2\n");
printf("3. 1.300VA Gol: D5-3\n");
printf("4. >1.300VA Gol: D4-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D51();
		break;
	case 2:
		D52();
		break;
	case 3:
		D53();
		break;
	case 4:
		D54();
		break;
	default:
	   printf("input yang anda masukan salah, input 1-4");
	   break;
}
}


// Program Pemilihan Case pada menu pilihan rumah
void rumahh() {
  int menu2;
  printf("===================================================================\n");
  printf("            PROGRAM  MENGHITUNG BIAYA PDAM RUMAH TANGGA\n            ");
  printf("===================================================================\n");
  printf("pilih rumah: \n");
  printf("1. RUMAH A1\n");
  printf("2. RUMAH A2\n");
  printf("3. RUMAH A3\n");
  printf("4. RUMAH A4\n");
  printf("5. RUMAH B \n");
  reVldInt(&menu2, "pilih : ");
  switch(menu2){
    case 1:
        rumah1();
        break;
    case 2:
        rumah2();
        break;
    case 3:
        rumah3();
        break;
    case 4:
        rumah4();
        break;
    case 5:
        rumah5();
        break;
    default:
         printf("input yang anda masukan salah, input 1-5");
         break;
 }
}

void usaha1() { //E2 //Menu Usaha 2
int menu;
printf("\n");
printf("======================================================================\n");
printf("            MENGHITUNG BIAYA PDAM USAHA NIAGA KECIL\n");
printf("======================================================================\n");
printf("\n");
printf("Pilihan golongan usaha yang terdaftar\n");
printf("1. 450VA Gol: E1-1\n");
printf("2. 900VA Gol: E1-2\n");
printf("3. 1.300VA Gol: E1-3\n");
printf("4. >1.300VA Gol: E1-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		E11();
		break;
	case 2:
		E12();
		break;
	case 3:
		E13();
		break;
	case 4:
		E14();
		break;
	default:
	   printf("input yang anda masukan salah, input 1-4");
	   break;
}
}
void usaha2() { // E2
int menu;
printf("\n");
printf("====================================================\n");
printf("      MENGHITUNG BIAYA PDAM USAHA NIAGA SEDANG\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan usaha yang terdaftar\n");
printf("1. 450VA Gol: E2-1\n");
printf("2. 900VA Gol: E2-2\n");
printf("3. 1.300VA Gol: E2-3\n");
printf("4. >1.300VA Gol: E2-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		E21();
		break;
	case 2:
		E22();
		break;
	case 3:
		E23();
		break;
	case 4:
		E24();
		break;
	default:
	   printf("input yang anda masukan salah, input 1-4");
	   break;
}
}
void usaha3() { // E3
int menu;
printf("\n");
printf("====================================================\n");
printf("      MENGHITUNG BIAYA PDAM USAHA NIAGA BESAR\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan usaha yang terdaftar\n");
printf("1. 450VA Gol: E3-1\n");
printf("2. 900VA Gol: E3-2\n");
printf("3. 1.300VA Gol: E3-3\n");
printf("4. >1.300VA Gol: E2-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		E31();
		break;
	case 2:
		E32();
		break;
	case 3:
		E33();
		break;
	case 4:
		E34();
		break;
	default:
	   printf("input yang anda masukan salah, input 1-4");
	   break;
}
}



void usaha() { //Menu Usaha Awal

 int menu3;
  char pilih;
  printf("======================================================================\n");
  printf("      PROGRAM  MENGHITUNG BIAYA PDAM USAHA DI DESA TAMPAKSIRING\n");
  printf("======================================================================\n");
  printf("pilih usaha yang terdaftar: \n");
  printf("1. Niaga Kecil\n");
  printf("2. Niaga Sedang\n");
  printf("3. Niaga Besar\n");
  reVldInt(&menu3, "pilih: ");
  switch(menu3){
    case 1:
    usaha1();
    break;
    case 2:
    usaha2();
    break;
    case 3:
    usaha3();
    break;
    default:
     printf("input yang anda masukan salah, input 1-3");
     break;
}
}

void tabel()
 {

 printf("|================================================================================================================================================================================\n");
 printf("|                                                                                                                                                                               |\n");
 printf("|                                                              ----------------DAFTAR PDAM-------------------                                                                   |\n");
 printf("|                                                                                                                                                                               |\n");
 printf("|================================================================================================================================================================================\n");
 printf("| NO |       Kelompok            |        Golongan       |       Lebar Jalan     |   tengangan listrik    |    Tarif 0-10 m3     |     Tarif 11-20 m3      |     Tarif >20 m3   |\n");
 printf("|================================================================================================================================================================================\n");
 printf("| 1  |  Non niaga bersubsidi     |   1. Rumah tangga a1  |    0-3,99             |          450 VA        |     Rp. 1.780        |       Rp. 2.060         |       Rp. 5.880    |\n");
 printf("|    |                           |                       |                       |          900 VA        |     Rp. 2.060        |       Rp. 2.340         |       Rp. 5.940    |\n");
 printf("|    |                           |   2. Runah tangga a2  |    4-6,99 m           |          450 VA        |     Rp. 2.340        |       Rp. 2.340         |       Rp. 6.000    |\n");
 printf("|    |                           |                       |                       |          900 VA        |     Rp. 2.620        |       Rp. 2.900         |       rp. 6.060    |\n");
 printf("|    |                           |   3. Rumah tangga a3  |    7-10 m             |          450 VA        |     Rp. 2900         |       Rp. 3180          |       Rp. 6120     |\n");
 printf("|    |                           |                       |                       |          900 VA        |     Rp. 3180         |       Rp. 3740          |       Rp. 6240     |\n");
 printf("|    |                           |   4. Rumah tangga a4  |    >10  m             |          450 VA        |     Rp. 3460         |       Rp. 3740          |       Rp. 6240     |\n");
 printf("|    |                           |                       |                       |          900 VA        |     Rp. 3740         |       Rp. 4020          |       Rp. 6300     |\n");
 printf("|================================================================================================================================================================================\n");
 printf("| 2  |  Non niaga tanpa          |   1. Rumah tangga a1  |    0-3,99             |          1.300 VA      |     Rp. 6.340        |       Rp. 9.200         |       Rp. 9.600    |\n");
 printf("|    |    bersubsi               |                       |                       |         >1.300 VA      |     Rp. 6.420        |       Rp. 9.350         |       Rp. 9.650    |\n");
 printf("|    |                           |   2. Runah tangga a2  |    4-6,99 m           |          1.300 VA      |     Rp. 6.490        |       Rp. 9.500         |       Rp. 9.800    |\n");
 printf("|    |                           |                       |                       |          1.300 VA      |     Rp. 6.640        |       Rp. 9.800         |       Rp. 10.100   |\n");
 printf("|    |                           |                       |                       |         >1.300 VA      |     Rp. 6.870        |       Rp. 9.950         |       Rp. 10.250   |\n");
 printf("|    |                           |   4. Rumah tangga a4  |    >10  m             |          1.300 VA      |     Rp. 6.790        |       Rp. 10.100        |       Rp. 10.400   |\n");
 printf("|    |                           |                       |                       |         >1.300 VA      |     Rp. 6.940        |       Rp. 10.400        |       Rp. 10.700   |\n");
 printf("|    |                           |                       |                       |          1.300 VA      |     Rp. 7.170        |       Rp. 10.850        |       Rp. 11.150   |\n");
 printf("|===============================================================================================================================================================================|\n");
 printf("| 3  |  Usaha                    |   1. Niaga Kecil      |    0-3,99             |          450   VA      |     Rp. 9.200        |       Rp. 9.850         |       Rp. 10.950   |\n");
 printf("|    |                           |                       |                       |          900   VA      |     Rp. 9.500        |       Rp. 10.150        |       Rp. 11.250   |\n");
 printf("|    |                           |                       |                       |          1.300 VA      |     Rp. 9.800        |       Rp. 10.750        |       Rp. 11.850   |\n");
 printf("|    |                           |   2. Niaga Sedang     |    7-10 m             |          450   VA      |     Rp. 10.400       |       Rp. 11.050        |       Rp. 12.150   |\n");
 printf("|    |                           |                       |                       |          900   VA      |     Rp. 10.700       |       Rp. 11.350        |       Rp. 12.550   |\n");
 printf("|    |                           |                       |                       |          1.300 VA      |     Rp. 11.000       |       Rp. 11.650        |       Rp. 13.150   |\n");
 printf("|    |                           |                       |    >10 m              |         >1.300 VA      |     Rp. 11.300       |       Rp. 11.950        |       Rp. 13.950   |\n");
 printf("|    |                           |   3. Niaga Besar      |                       |          450   VA      |     Rp. 11.600       |       Rp. 12.250        |       Rp. 14.750   |\n");
 printf("|    |                           |                       |                       |          900   VA      |     Rp. 11.900       |       Rp. 12.550        |       Rp. 15.050   |\n");
 printf("|    |                           |                       |                       |          1.300 VA      |     Rp. 12.200       |       Rp. 12.850        |       Rp. 15.850   |\n");
 printf("|    |                           |                       |                       |         >1.300 VA      |     Rp. 12.500       |       Rp. 13.150        |       Rp. 16.650   |\n");
 printf("|================================================================================================================================================================================\n");

}

int main() {
int kategori;
char ulangi;
do {
system("cls");
printf("\nMasukkan golongan anda\n");
printf("1. untuk Rumah Tangga\n");
printf("2. untuk Usaha \n ");
printf("\n");
reVldInt(&kategori, "Pilih: ");
  switch(kategori){
    case 1:
    tabel();
    rumahh();
    break;
    case 2:
    tabel();
    usaha();
	break;
	default:
	printf("Inputan Anda Salah Silakan Masukan Antara Angka 1 Atau 2");
}

printf ("\nApakah anda ingin mengulang kembali? (Y/N): "); scanf (" %c", &ulangi);
    } while (ulangi == 'y' || ulangi == 'Y');

printf("=============================================================/n");
printf("          Terima Kaih Telah Menggunakan Program Ini            ");
printf("=============================================================/n");

return 0;

}
