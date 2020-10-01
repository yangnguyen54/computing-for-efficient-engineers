#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
  char c;
  bool isUppercase = false;
  while ((c = getchar()) != EOF) {
    if (isUppercase) {
      putchar(toupper(c));
    }
    else {
      putchar(tolower(c));
    }
    if (c != ' ' && c != '\t' && c != '\n') {
      isUppercase = !isUppercase;
    }
  }
  return 0;
}
