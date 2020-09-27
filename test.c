#include <stdio.h>
#include <stdlib.h>

int confirm;
int age;

int main () {
  printf("Hi, Would you like to begin?\t");
  scanf("%d", &confirm);
  if (!confirm) {
    return 0;
    printf("Goodbye!");
  }
  printf("Thank you for continuing!");
  printf("Ok, first question.\nHow old are you?\t");
  scanf("%d",&age);
  printf("Cool you are %d years old.\nWould you like to answer another question?\t", age);
}
