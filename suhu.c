#include <stdio.h>
//rumus
#define celci1 32
#define celci2 5
#define celci3 9

void cariCelcius()
{
    int farenhet;
    printf("masukan nilai farenhet: ");
    scanf("%d", &farenhet);
    if(!farenhet) {
        printf("Mohon isi dengan benar");
    } else {
        printf("(%d Farenhet - %d) * %d / %d = %d Derajat Celcius", farenhet,celci1,celci2,celci3, (farenhet - celci1) * celci2 / celci3);
    }
}

void cariFarenhet() {
  int celcius;
  printf("Masukan nilai celcius: ");
  scanf("%d",&celcius);
  if(!celcius) {
    printf("Mohon isi dengan benar");
  } else {
    printf("(%d Celcius * %d / %d) + %d = %d Farenhet",celcius,celci3,celci2,celci1, (celcius * celci3 / celci2) + celci1);
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
      printf("Salah Memasukkan Pilihan");
  }
}

void setSuhu() {
    pilihansuhu();
}
