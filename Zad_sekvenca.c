#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int izracunaj(int *b) {
(*b)++;
return *b;
}

int main(){
int n, b = 0;

printf("Unesi broj:");
scanf("%d",&n);
printf("\t+-------+ +-------+");
printf("\n\t|Inter. | | Brojac|\n");
printf("\t+-------+ +-------+\n");
 while (n !=1) {
  if (n%2==0) {
    n=n/2;
    izracunaj(&b);

    printf("\t| %5d | | %5d |\n", b, n); }

  else {
    n = 3 * n + 1;
    izracunaj(&b);
    printf("\t| %5d | | %5d |\n", b, n); }

  }
   printf("\t+-------+ +-------+\n");
}
