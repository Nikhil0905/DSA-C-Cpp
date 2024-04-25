#include <stdio.h>

void print_binary(int num) {
  if (num == 0) {
    printf("0");
    return;
  }

  // Find the number of bits needed
  int bit_count = sizeof(int) * 8;
  while ((num >> (bit_count - 1)) == 0 && bit_count > 0) {
    bit_count--;
  }

  // Print bits from left to right
  for (int i = bit_count - 1; i >= 0; i--) {
    printf("%d", (num >> i) & 1);
  }
}

int main() {
  int number;
  printf("Enter Number: ");
  scanf("%d",&number);
  printf("Binary representation of %d: ", number);
  print_binary(number);
  printf("\n");

  return 0;
}
