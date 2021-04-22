#include<stdio.h>
int main()
{

  /*

              1
            1   2
          1   2    3
        1   2    3   4



  */

int n,row,col;

printf("Enter your expected number: ");
scanf("%d",&n);

for(row=1;row<=n;row++)
{
  for(col=1;col<=n-row;col++)
  {
    printf(" ");
  }

  for(col=1;col<=row;col++){
    printf("%d ",col);
  }
  printf("\n");

}


}
