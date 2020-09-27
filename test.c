#include <stdio.h>
#include <stdlib.h>

int confirm;
int age;
int begin = 1;
int confirmer ();

int main () {
  confirmer();
  printf("\nHow old are you?\t");
  scanf("%d",&age);
  printf("\nCool you are %d years old.", age);
  confirmer();
}

int confirmer() {
  if (begin == 0) {
    printf("\nWould you like to continue?\t");
    scanf("%d", &confirm);
    if (!confirm) {
      printf("Goodbye!");
      exit(0);
    }
    printf("\nOk next question.");
    return 0;
  } else if (begin == 1) {
    begin = 0;
    printf("Hi, Would you like to begin?\t");
    scanf("%d", &confirm);
    if (!confirm) {
      printf("Goodbye!");
      exit(0);
    }
    printf("Ok, first question.");
  }
}
