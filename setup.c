#include <stdio.h>
#include "physics.c"
#include "suhu.c"

void main() {
  int pilih;
  printf("Angka 1 untuk rumus fisika \nAngka 2 untuk suhu");
  scanf("%d", &pilih);
  switch(pilih) {
    case 1:
      return setFisika();
      break;
    case 2:
      return setSuhu();
      break;
    default:
      printf("salah memasukan pilihan");
  }
}