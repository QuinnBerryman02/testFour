#include <stdio.h>
#include <stdlib.h>

int confirm;
int age;
int confirmer ();

int main () {
  printf("Hi, Would you like to begin?\t");
  confirmer();
  printf("Ok, first question. How old are you?\t");
  scanf("%d",&age);
  printf("Cool you are %d years old.", age);
  confirmer();
}

int confirmer() {
  printf("\nWould you like to continue?\t");
  scanf("%d", &confirm);
  if (!confirm) {
    printf("Goodbye!");
    exit(0);
  }
  printf("\nOk next question.");
  return 0;
}
