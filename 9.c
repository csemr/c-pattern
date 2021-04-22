#include<stdio.h>
int main()
{

  /*
                  1
              1   2   1
          1   2   3   2   1
              1   2   1
                  1



  */
int n,row,col;
printf("How many elements: ");
scanf("%d",&n);

for(row=1;row<=n;row++)
{
  for(col=1;col<=n-row;col++){
    printf(" ");
  }
  for(col=1;col<=row;col++)
  {
    printf("%d",col);
  }
  for(col=row-1;col>=1;col--)
  {
    printf("%d",col);
  }
  printf("\n");
}

for(row=n-1;row>=1;row--)
{
  for(col=1;col<=n-row;col++){
    printf(" ");
  }
  for(col=1;col<=row;col++)
  {
    printf("%d",col);
  }
  for(col=row-1;col>=1;col--)
  {
    printf("%d",col);
  }
  printf("\n");
}


}
