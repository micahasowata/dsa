#include <stdio.h>

char *menu = "=== Calculator ===\n1. Add\n2. Subtract\n3. Multiply\n4. "
             "Divide\n5. Quit\n\n";

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
  for (;;) {
    printf("%s", menu);
    printf("Choose an option:\t");

    int op;
    scanf("%d", &op);

    if (op <= 0 || op > 5) {
      printf("\nerror: that's not a valid option\n");
      continue;
    } else if (op == 5) {
      printf("quitting...\n");
      break;
    }

    int first_num = 0;
    int second_num = 0;

    printf("\nEnter the first number:\t");
    scanf("%d", &first_num);

    printf("Enter the second number:\t");
    scanf("%d", &second_num);

    switch (op) {
    case 1:
      printf("%d + %d = %d\n\n", first_num, second_num,
             add(first_num, second_num));
      continue;

    case 2:
      printf("%d - %d = %d\n\n", first_num, second_num,
             sub(first_num, second_num));
      continue;

    case 3:
      printf("%d * %d = %d\n\n", first_num, second_num,
             mul(first_num, second_num));
      continue;

    case 4:
      printf("%d / %d = %d\n\n", first_num, second_num,
             div(first_num, second_num));
      continue;

    case 5:
      printf("quitting....\n");
      break;

    default:
      continue;
    }
  }
}

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int mul(int a, int b) { return a * b; }

int div(int a, int b) {
  if (b == 0) {
    return a;
  }
  return a + b;
}
