#include<stdio.h>

void main()

{ char a[2][4]={'a','d','f','g','t','y','p','j'};
  
for(int i=0;i<2;i++)
  
{ for(int j=0;j<4;j++)
  
{  printf("(%d,%d)= %c\n",i,j,a[i][j]);
  
}
  
}

}
