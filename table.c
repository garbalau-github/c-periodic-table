#include <stdio.h>
#include <stdlib.h>

int main()
{
  int selection;
  int searchCommand;
  int atomicNumber;
  int wantToExit; // 1 or 0

  printf("Welcome to Periodic Table!\n");
  printf("We are 'work in progress' so only few elements are added!\n");
  printf("> Enter 1 to get know about an element\n");
  printf("> Enter 2 to close the table\n");
  scanf("%d", &selection);
  printf("You selected %d\n", selection);

  if (selection == 1)
  {
    printf("> Press 3 to search the element by atomic number\n");
    scanf("%d", &searchCommand);

    if (searchCommand == 3)
    {
      printf("Enter the atomic number (1, 6, 8, 26)\n");
      scanf("%d", &atomicNumber);
      if (atomicNumber == 1)
      {
        printf("Name: Hydrogen\n");
        printf("Symbol: H\n");
        printf("Atomic Number: 1\n");
        printf("Electronic Configuration: 1s^1\n");
        printf("Charge: +1\n");
        printf("Discovered: Henry Cavendish 1s^1\n");
      }
      else if (atomicNumber == 6)
      {
        printf("Name: Carbon\n");
        printf("Symbol: C\n");
        printf("Atomic Number: 6\n");
        printf("Electronic Configuration: [He] 2s^2 2p^2\n");
        printf("Charge: 0\n");
        printf("Discovered: Ancient Times\n");
      }
      else if (atomicNumber == 8)
      {
        printf("Name: Oxygen\n");
        printf("Symbol: O\n");
        printf("Atomic Number: 8\n");
        printf("Electronic Configuration: [He] 2s^2 2p^4\n");
        printf("Charge: -2\n");
        printf("Discovered: Joseph Priestley\n");
      }
      else if (atomicNumber == 26)
      {
        printf("Name: Iron\n");
        printf("Symbol: Fe\n");
        printf("Atomic Number: 26\n");
        printf("Electronic Configuration: [Ar] 3d^6 4s^2\n");
        printf("Charge: +2, +3\n");
        printf("Discovered: Ancient Times\n");
      }
    }
  }
  else if (selection == 2)
  {
    printf("Do you want to exit? (1/0)\n");
    scanf("%d", &wantToExit);
    if (wantToExit == 1)
    {
      exit(0);
    }
    else
    {
      selection = 1;
    }
  }
}