/*
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Deskripsi:Exercise
*Tahun: 2019
*/
#include<iostream>
#include<math.h>
using namespace std;
typedef struct {
 float panjang;
 float lebar;
} segiempat;

void input(segiempat *s) {
	cout<<"Masukkan panjang : ";cin>>s->panjang;
	cout<<"Masukkan lebar : ";cin>>s->lebar;
}
float keliling(segiempat s) {
	int keliling;
	keliling=s.lebar*2+s.panjang*2;
	return keliling;
}
float luas(segiempat s) {
	int luas;
	luas=s.panjang*s.lebar;
	return luas;
}
// panjang diagonal segiempat
float diagonal(segiempat s) {
	int diagonal;
	diagonal=sqrt(s.lebar*s.lebar+s.panjang*s.panjang);
	return diagonal;
}
void print(segiempat s) {
cout<<"\n";
cout<<"Keliling = "<<keliling(s);cout<<"\n";
cout<<"Luas	="<<luas(s);cout<<"\n";
cout<<"Diagonal = "<<diagonal(s);cout<<"\n";
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}

