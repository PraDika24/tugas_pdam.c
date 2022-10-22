#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BIAYA_ADM 50.00

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

//--------------------------------------RUMAH------------------------------------------------------------ 

void D1() { //Isi Program Pemilihan 1
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D1-1\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
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
 biaya = (besar_pemakaian - 10) * 2060 + 17800;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 5880 + 59000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>100)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian>10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
    
}

void D2() { // Isi Program Pemilihan 2
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D1-2\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*2060;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 2340 + 20600;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 5940 + 67400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}

if(besar_pemakaian>100)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian>10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);

}

void D21() { // PROGRAM D 2
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D2-1\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*2060;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 2340 + 20600;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 2340 + 72800;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>100)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian>10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
    
}

void D22() { // D22
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D2-2\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);
if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*2620;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 2900 + 26200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 6060 + 84200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>100)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian>10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}


void D31() { // PROGRAM D 3
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D3-1\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*2900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 3180 + 29000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 6120 + 63600;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>100)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian>10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
    
}

void D32() { // D33
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D3-3\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*3180;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 3460  + 31800;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 6180 + 101000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>100)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian>10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}





void D41() { // PROGRAM D 4 bug
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-1\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*3460;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 3740 + 34600;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 6240 + 109400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>100)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian>10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
    
}

void D42() { // D44
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*3740;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 4020  + 37400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 6180 + 117800;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}



void D51(){ // D51
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6940;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10400  + 69400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 10700 + 277400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}




	
void D52(){ // D52
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*7020;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10550  + 70200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 10850 + 281200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}


	
void D53(){ // D53
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*7090;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10700  + 70900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 11000 + 284900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}



void D54(){ // D54
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*7170;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10850  + 71700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 11150 + 288700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}




void D6(){ // rumah tangga A1-1
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6340;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 9200  + 63400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 9600 + 247400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}



void D61(){ // rumah tangga A1-2
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6420;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 9350 + 64200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 9650 + 251200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void D62(){ // rumah tangga A2-1
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6490;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 9500 + 64900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 9800 + 254900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}


void D63(){ // rumah tangga A2-2
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6570;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 9650 + 65700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 9950 + 258700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}




void D64(){ // rumah tangga A3-1
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6640;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 9800 + 66400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 10100 + 262400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}


void D65(){ // rumah tangga A3-2
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6720;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 9950 + 67200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 10250 + 266200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}			



void D66(){ // rumah tangga A4-1
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6790;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10100 + 67900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 10400 + 269900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}	


void D67(){ // rumah tangga A4-2
	char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 10.00;
printf("BIAYA GOLONGAN D4-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*6870;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10250 + 68700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 10550 + 273700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}			
	

// Program Pemilihan Case
void rumah() { //D1
int menu;
printf("\n");
printf("====================================================\n");
printf("           MENGHITUNG BIAYA PDAM RUMAH A1\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan rumah\n");
printf("1. 450VA Gol: D1-1\n");
printf("2. 900VA Gol: D1-2\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D1();
		break;
	case 2:
		D2();
		break;
	default:
	   printf("salah");
}
}


// kelompok 2
void rumahku1() { 
int menu;
printf("\n");
printf("====================================================\n");
printf("           MENGHITUNG BIAYA PDAM RUMAH A1\n");
printf("====================================================\n");
printf("\n");
printf("Pilihan golongan rumah\n");
printf("1. 1.300VA Gol: D1-3\n");
printf("2. >1.300VA Gol: D1-4\n");
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D1();
		break;
	case 2:
		D2();
		break;
	default:
	   printf("salah");
}
}



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
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D21();
		break;
	case 2:
		D22();
		break;
	
	default:
	   printf("salah");
}
}
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
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D31();
		break;
	case 2:
		D32();
		break;
	
	default:
	   printf("salah");
}
}

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
printf("====================================================\n");
reVldInt(&menu, "pilih : ");

switch(menu){
	case 1:
		D41();
		break;
	case 2:
		D42();
		break;
	
	default:
	   printf("salah");
}
}


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
	   printf("salah");
}
}
 
void rumahh() {

 int menu2;
  char pilih;
  printf("===================================================================\n");
  printf("     PROGRAM  MENGHITUNG BIAYA PDAM RUMAH DI DESA TAMPAKSIRING\n");
  printf("===================================================================\n");
  printf("pilih rumah: \n");
  printf("1. RUMAH A1\n");
  printf("2. RUMAH A2\n");
  printf("3. RUMAH A3\n");
  printf("4. RUMAH A4\n");
  reVldInt(&menu2, "pilih : ");
  switch(menu2){
    case 1:
    rumah();
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
    default:
     printf("salah");
 }
}

void rumahhh() {

 int menu2;
  char pilih;
  printf("===================================================================\n");
  printf("     PROGRAM  MENGHITUNG BIAYA PDAM RUMAH DI DESA TAMPAKSIRING\n");
  printf("===================================================================\n");
  printf("pilih rumah: \n");
  printf("1. RUMAH A1\n");
  printf("2. RUMAH A2\n");
  printf("3. RUMAH A3\n");
  printf("4. RUMAH A4\n");
  printf("5. RUMAH B \n");
  printf("\n");
  reVldInt(&menu2, "pilih : ");
  switch(menu2){
    case 1:
    rumahku1();
    break;
    case 2:
    rumahku1();
    break;
    case 3:
    rumahku1();
    break;
    case 4:
    rumahku1();
    break;
    case 5:
    rumah5();
    break;
    default:
     printf("salah");
 }
}

void subsidi(){

 int menu_subsidi;
 char pilihh;
   printf("masukan jenis rumah\n");
   printf("1. non niaga bersubsidi\n");
   printf("2. non niaga tanpa subsidi\n");
   printf("\n");
   reVldInt(&menu_subsidi, "pilih :");
   switch(menu_subsidi){
   	case 1 :
   		rumahh();
   		break;
   	case 2 :
   		rumahhh();
   		break;
   	default:
   		printf("salah");
   		
   }
}
//---------------------------------------------------------------------------------------------------


//------------------------------------------USAHA----------------------------------------------------


void E1() { // E1-1 MENU USAHA 3
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E1-1\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*9200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 9850  + 92000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 10950 + 289000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E2() { // E1-2
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E1-2\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*9500;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10150  + 95000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 11250 + 298000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}


void E3() { // E1-3
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E1-3\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*9800;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10150  + 98000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 11550 + 301000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E4() { // E1-4
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E1-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*10100;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 10750  + 101000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 11850 + 111750 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E21() { // E2-1
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E2-1\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*10400;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 11050  + 104000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 12150 + 325000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E22() { // E2-2
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E2-2\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*10700;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 11350  + 107000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 12550 + 334000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E23() { // E2-3
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E2-2\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*11000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 11650  + 110000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 13150 + 343000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E24() { // E2-4
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E2-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*11300;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 11950  + 113000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 13950 + 352000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E31() { // E3-1
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E3-1\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*11600;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 12250  + 116000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 14750 + 361000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E32() { // E3-2
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E3-2\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*11900;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 12550  + 119000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 15050 + 370000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E33() { // E3-3
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E3-3\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*12200;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 12850  + 112000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 15850 + 369000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
}

void E34() { // E3-4
char kategori;
float bpm;
float biaya;int pemakaian_lalu;int pemakaian_ini;float besar_pemakaian;float sisa;float denda;
bpm = 20.00;
printf("BIAYA GOLONGAN USAHA E3-4\n");
reVldInt(&pemakaian_lalu, "Masukkan jumlah pemakaian bulan lalu (dalam m3) : ");
reVldInt(&pemakaian_ini, "Masukkan jumlah pemakaian bulan sekarang (dalam m3) : ");
besar_pemakaian = pemakaian_ini - pemakaian_lalu;
printf("\nJumlah pemakaian bulan ini : %2.f m3\n",besar_pemakaian);

if(besar_pemakaian<11)
{
 biaya = besar_pemakaian*12500;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian<21)
 {
 biaya = (besar_pemakaian - 10) * 13150  + 125000;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else if(besar_pemakaian>=21)
 {
 biaya = (besar_pemakaian - 20) * 16650 + 388000 ;
 printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
 }
 else
 {
biaya = 0;
printf("Biaya pemakaian bulan ini : Rp %.2f\n",biaya);
}
if(besar_pemakaian>101)
{
denda = 20.00;
printf("Denda : Rp %.2f\n",denda);
}
else if (besar_pemakaian > 10)
{
denda = 10.00;
printf("Denda : Rp %.2f\n",denda);
} 
else {
denda = 0;
printf("Denda : Rp %.2f\n",denda);
}
printf("BPM : Rp %.2f\n",bpm);
printf("Biaya Administrasi : Rp %.2f\n",BIAYA_ADM);
printf("\nTotal : Rp %.2f + Rp %.2f + Rp %.2f + Rp %.2f = Rp %.2f\n",biaya,denda,bpm,BIAYA_ADM,BIAYA_ADM+bpm+biaya+denda);
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
		E1();
		break;
	case 2:
		E2();
		break;
	case 3:
		E3();
		break;
	case 4:
		E4();
		break;
	default:
	   printf("salah");
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
	   printf("salah");
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
	   printf("salah");
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
     printf("salah");
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










//------------------------------------------END------------------------------------------------------
int main() {
int kategori;
char namaa[100];
do {
system("cls");
printf("\n==========================================================\n");
printf("Masukan Nama Anda: ");
scanf("%s",&namaa);
printf("===========================================================\n");
printf("Halo %s Selamat Datang \n",&namaa);
printf("===========================================================\n");
printf("\n");
printf("===========================================================\n");
printf("       MENGECEK PENGGUAAN AIR DI DESA TAMPAKSIRING\n");
printf("===========================================================\n");
printf("               PT AIR MINUM SEJAHTERA\n");
printf("===========================================================\n");
printf("\nMasukkan golongan anda\n");
printf("1. untuk Rumah Tangga\n");
printf("2. untuk Usaha \n ");
printf("\n");
reVldInt(&kategori, "Pilih: ");
  switch(kategori){
    case 1:
    tabel();
    subsidi();
    break;
    case 2:
    tabel();
    usaha();
	break;
	default:
	printf("Inputan Anda Salah Silakan Masukan Antara Angka 1 Atau 2");
}
	
printf ("\nApakah anda ingin mengulang kembali? (Y/N): "); scanf (" %c", &kategori);
    } while (kategori == 'y' || kategori == 'Y');
    
return 0;

}
