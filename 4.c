#include<stdio.h>
int main()
{
/*

Pattern Type: 4
################
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1




*/


int n,row,col;

printf("Enter your choice: ");
scanf("%d",&n);

for(row=n;row>=1;row--)
{
  for(col=1;col<=row;col++)
  {
    printf("%d ",col);
  }
  printf("\n");
}
}
