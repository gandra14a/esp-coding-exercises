#include <stdio.h>
#include <math.h>


int main(void)
{
  float first = 0;
  float second = 0;
  float result = 0;
  char op;
  char nl;

  printf("First number: ");
  scanf("%f", &first);
  scanf("%c", &nl);
  printf("Operation: ");
  scanf("%c", &op);
  scanf("%c", &nl);
  printf("Second number: ");
  scanf("%f", &second);
  scanf("%c", &nl);

  switch (op)
  {
    case '+':
      result = first + second;
      break;
    case '-':
      result = first - second;
      break;
    case '*':
      result = first * second;
      break;
    case '/':
      if (!(second < 0 || second > 0))
      {
        printf("Division through 0 not allowed!\n");
        return 1;
      }
      result = first / second;
      break;
    case 'p':
      if (first < 0 || second < 0)
      {
        printf("Base and exponent have to be at least 0!\n");
        return 1;
      }
      result = pow(first, second);
      break;
    case 's':
      if (first < 0)
      {
        printf("Square root only defined for numbers at least 0!\n");
        return 1;
      }
      result = sqrt(first);
      break;
    case 'e':
      result = exp(first);
      break;
    default:
      printf("Invalid operation!\n");
      return 1;
  }

  printf("Result: %.2f\n", result);

  return 0;
}