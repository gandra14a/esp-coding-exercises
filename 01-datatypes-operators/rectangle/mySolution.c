#include <stdio.h>

int main(void)
{
  unsigned int length = 0;
  unsigned int width = 0;

  printf("Insert length: ");
  scanf("%u", &length);
  printf("Insert width: ");
  scanf("%u", &width);

  unsigned int area = length * width;
  unsigned int perimeter = 2 * length + 2 * width;
  float aspect_ratio = (float)length/width;

  printf("Area: %u\n", area);
  printf("Perimeter: %u\n", perimeter);
  printf("Aspect ratio: %.2f\n", aspect_ratio);

  return 0;
}