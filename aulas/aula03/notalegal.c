#include <stdio.h>

int main() {
  printf("\x1b[32m----------------------------\n");
  printf("    N O T A  L E G A L      \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM           QTD  VALOR   \n");
  printf("%-14s %03i \x1b[34m%9.2f\x1b[0m\n" , "Banana nanica", 2, 20.00);
  printf("%-14s %03i \x1b[34m%9.2f\x1b[0m\n" , "coca cola", 1, 10.00);
  printf("%-14s %03i \x1b[34m%9.2f\x1b[0m\n" , "laranja lima", 1, 18.00);

//  printf("Banana nanica  2      20.00\n");
//  printf("coca cola      1      10.00\n");
//  printf("laranja lima   1      18.00\n");
  
  printf("----------------------------\n");
  printf("TOTAL...........: %10.2f\n", 48.00);
  
  return 0;
}