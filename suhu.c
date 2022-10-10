#include <stdio.h>
//rumus
#define celci1 32
#define celci2 5
#define celci3 9

void cariCelcius()
{
    int farenhet;
    char hasil;
    printf("masukan nilai farenhet: ");
    scanf("%d", &farenhet);
    hasil = farenhet - celci1 * celci2 / celci3;
    if(!farenhet) {
        printf("Mohon isi dengan benar \n");
    } else {
        printf(" %d Derajat Celcius \n",hasil);
    }
}

void cariFarenhet() {
  int celcius;
  char hasil;
  printf("Masukan nilai celcius: ");
  scanf("%d",&celcius);
  hasil = celcius * celci3 / celci2 + celci1;
  if(!celcius) {
    printf("Mohon isi dengan benar \n");
  } else {
    printf("%d Derajat Farenhet \n",hasil); 
  }
}

void pilihansuhu() {
  int pilihan;
  printf("KETERANGAN \n Angka 1 untuk mencari farenhet \n Angka 2 untuk mencari celcius \n");
  printf("Masukan pilihan : ");
  scanf("%d",&pilihan);
  if(pilihan == 1) {
      return cariFarenhet();
  } else if(pilihan == 2) {
      return cariCelcius();
  } else {
      printf("Salah Memasukkan Pilihan \n");
  }
}

void setSuhu() {
    pilihansuhu();
}
