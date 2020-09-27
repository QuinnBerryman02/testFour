#include <stdio.h>
#include <stdlib.h>

int confirm;

int main () {
  printf("Hi, Would you like to begin?\t");
  scanf("%d", &confirm);
  if (!confirm) {
    return 0;
    printf("Goodbye!");
  }
  printf("Thank you for continuing!");
}
