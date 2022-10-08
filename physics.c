#include <stdio.h>
  //rumus fisika
 //   Gaya (F) (F) = massa (m) x percepatan (a) = Newton (N)
void gaya() {
   int f,m,a;
   printf("masukan masa benda : ");
   scanf("%d",&m);
   printf("masukan kecepatan : ");
   scanf("%d",&a);
   if(!m && !a) {
      printf("salah memasukan angka");
   }
   f = (m * a);
   printf("hasilnya adalah %d newton",f);
}

//   Luas. (L) = (p) panjang x (l) lebar. = (m2) ...
void luas() {
   int luasnya,panjang,lebar;
   printf("masukan panjang benda : ");
   scanf("%d", &panjang);
   printf("masukan lebar benda : ");
   scanf("%d", &lebar);
   if (!panjang) 
   {
      printf("angka yang dimasukan salah \n");
   } else if(!lebar) {
      printf("angka yang dimasukan salah \n");
   }
   luasnya = (panjang * lebar);
   printf("luas benda adalah %d m2", luasnya);
}

//   Volume. (V) = (p) panjang x (l) lebar x (t) tinggi. = (m3) ...
void volume() {
   int v,p,l,t;
   printf("masukan panjang benda : ");
   scanf("%d",&p);
   printf("masukan lebar benda : ");
   scanf("%d", &l);
   printf("masukan tinggi benda : ");
   scanf("%d", &t);
   if (!p) 
   {
      printf("angka yang dimasukan salah \n");
   } else if(!l) {
      printf("angka yang dimasukan salah \n");
   } else if(!t) {
      printf("angka yang dimasukan salah \n");
   }
   v = (p * l * t);
   printf("Volumenya adalah %d m3",v);

}

// Percepatan (a) (a) = (v) kecepatan / (t) waktu. = m (s-2) ...
void percepatan() {
   int v;
   float a,t;
   printf("masukan kecepatan benda : ");
   scanf("%d", &v);
   printf("masukan waktu : ");
   scanf("%f", &t);
   if(!v) {
      printf("angka yang dimasukan salah \n");
   } else if(!t) {
      printf("angka yang dimasukan salah \n");
   }

   a = (v / t);
   printf("hasil percepatan benda adalah %.2f m", a);
}


//   Massa Jenis (p) (ρ) = massa (m) / volume (v) = kg (m-3) ...
//masih error
void masaJenis() {
   int p,m,v;
   
   printf("masukan masa benda : ");
   scanf("%d" , &m);
   printf("masukan volume : ");
   scanf("%d", &v);
   if(!m) {
      printf("angka yang dimasukan salah \n");
   } else if(!v) {
      printf("angka yang dimasukan salah \n");
   }
   p = m / v;
   printf("Masa Jenis Benda adalah %d", p); 
}

void pilihanFisika() {
     int pilihan;
  printf("KETERANGAN \n Angka 1 untuk mencari gaya \n  Angka 2 untuk mencari luas  \n Angka 3 untuk mencari volume  \n Angka 4 untuk mencari percepatan \n ");
  printf("Masukan pilihan : ");
  scanf("%d",&pilihan);
  switch(pilihan) {
    case 1:
      return gaya();
      break;
    case 2:
      return luas();
      break;
    case 3:
      return volume();
      break;
    case 4:
      return percepatan();
      break;
    default:
      printf("salah memasukan pilhan");
  }
}

void setFisika() {
  pilihanFisika();
}