#include <stdio.h>
#include <ctype.h>

char swap_case(char ch) {
  if (islower(ch)) {
    return toupper(ch);
  } else if (isupper(ch)) {
    return tolower(ch);
  } else {
    // Handle non-alphabetic characters (optional)
    return ch;
  }
}

int main() {
  char character;

  printf("Enter a character: ");
  scanf(" %c", &character);

  char swapped_char = swap_case(character);

  printf("Swapped case: %c\n", swapped_char);

  return 0;
}

