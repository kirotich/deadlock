/*
      Bankers Algorithm

*/

#include <stdio.h>

int max[100][100];
int alloc[100][100];
int need[100][100];
int avail[100][100];

int processes,resources;

//function prototypes
void input();
void show();
void cal();

int main()
{
  printf("%s\n", "-------------------- Banker's Algorithm -----------------" );
  input();
  show();
  cal();

  return 0;
}


void input()
{
      int row, clm;
      printf("%s\n", "Enter number of processes");
      scanf("%d" &processes);
      printf("%s\n" "Enter number of resources instances");
      scanf("%d" &resources);

      /*
          input matrices - max, alloc, need, avail
      */

      printf("%s\n", "Enter Max matrix " );
      for(row=0; row<processes; row++)
      {
          for(clm=0; clm<resources; clm++)
          {
              scanf("%d", &max[row][clm]);
          }
      }

      printf("%s\n", "Enter Allocation matrix " );
      for(row=0; row<processes; row++)
      {
          for(clm=0; clm<resources; clm++)
          {
              scanf("%d", &alloc[row][clm]);
          }
      }

      printf("%s\n", "Enter Available matrix " );
      for(row=0; row<processes; row++)
      {
          for(clm=0; clm<resources; clm++)
          {
              scanf("%d", &avail[row][clm]);
          }
      }

      





}
