#include <stdio.h>
#include "physics.c"
#include "suhu.c"
#include "c-calculat.c"

void main() {
  int pilih;
  printf("Angka 1 untuk rumus fisika \nAngka 2 untuk suhu \nAngka 3 untuk kalkulator \nMasukan Pilihan : ");
  scanf("%d", &pilih);
  switch(pilih) {
    case 1:
      return setFisika();
      break;
    case 2:
      return setSuhu();
      break;
    case 3:
      return pilihCalculat();
      break;
    default:
      printf("salah memasukan pilihan");
  }
}