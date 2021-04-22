/*
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/

#include<stdio.h>
int main()
{
  int n,row,col;

  printf("Enter your choice: ");
  scanf("%d",&n);

  for(row=1;row<=n;row++)
  {
    for(col=1;col<=n;col++)
    {
      printf("%d ",row);
    }
    printf("\n");
  }




}
