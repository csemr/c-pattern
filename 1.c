//    1
//    1 2
//    1 2 3
//    1 2 3 4
//    1 2 3 4 5
//    1 2 3 4 5 6 this type pattern

#include<stdio.h>
#define sf scanf
#define pf printf
int main()
{

  int row,col,n;

  pf("How many times: ");
  sf("%d",&n);

  //using loop for row and col
  for(row=1;row<=n;row++)
  {
    for(col=1;col<=row;col++)
    {
      pf("%d ",col);
    }
    pf("\n");
  }
getch();
}
