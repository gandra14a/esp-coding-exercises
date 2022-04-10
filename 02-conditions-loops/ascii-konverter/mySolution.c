#include <stdio.h>

int main(void)
{
  char ch;
  int num;
  char nl;
  
  int stop = 0;
  while (!stop)
  {
      printf("Insert character: ");
      scanf("%c", &ch);
      scanf("%c", &nl);


      if (ch < 'A' || (ch > 'Z' && ch < 'a') || ch > 'z')
      {
        printf("[ERROR] not a valid Character [A-Z or a-z]\n");
      }
      else
      {
        printf("Number:           %d\n", ch);
        printf("ASCII Character:  %c\n", ch);
      }

      if (ch == 'q' || ch == 'Q')
      {
        stop = 1;
        printf("GOODBYE\n");
        continue;
      }

      printf("----------------------------------\n");

      printf("Insert number: ");
      scanf("%d", &num);
      scanf("%c", &nl);

      if (num < 31 || num > 127)
      {
        printf("[ERROR] not a visible ASCII-Character\n");
      }
      else
      {
        printf("Number:           %d\n", num);
        printf("ASCII Character:  %c\n", num);
      }
      printf("----------------------------------\n");
      printf("----------------------------------\n");
  }



  return 0;
}