//tuple matrix
#include<stdio.h>
int main()
{
 int row=0;int column=0;int c=0;int k=0;
 printf("enter the number of row of the matrix\n");
 scanf("%d",&row);
 printf("enter the number of columns of the matrix\n");
 scanf("%d",&column);
 int a[row][column];
 printf("fill the rows and columns\n");
 for(int i=0;i<row;i++)
 {

    for(int j=0;j<column;j++)
    {
        scanf("%d",&a[i][j]);
    }
 }
 int b[row+1][3];
 for(int i=0;i<row;i++)
 {

    for(int j=0;j<column;j++)
    {
        if(a[i][j]==0)
        {
            c++;
        }
        else
        {
            k++;
        }

    }
 }
 if(c>=((row*column)/2))
 {
     b[0][0]=row;
     b[0][1]=column;
     b[0][2]=k;
for(int i=0;i<row;i++)
 {
  int index=0;
    for(int j=0;j<column;j++)
    {
        if(a[i][j]!=0)
        {
          index=j;
        }
    }
    b[i+1][0]=i+1;
    b[i+1][1]=index+1;
    b[i+1][2]=a[i][index];

 }
 printf("urs tuple matrix\n");
 for(int i=0;i<row+1;i++)
 {
     for(int j=0;j<3;j++)
     {
         printf("%d \t",b[i][j]);
     }
     printf("\n");
 }
 }
}
