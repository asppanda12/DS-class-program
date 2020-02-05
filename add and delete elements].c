// to delete and insert elemrnts in a array
#include<stdio.h>
int main()
{

int t=1;
do
{
    printf("enter the size of an array\n");
      int size=0;
       scanf("%d",&size);
       int a[size+1];
       printf("enter the numbers into an array\n");
       for(int i=0;i<size;i++)
       {
           scanf("%d",&a[i]);

       }
printf("ENTER 1: TO DELETE ELEMENTS FROM AN ARRAY\nENTER 2: TO INSERT ELEMNTS INTO AN ARRAY\n");
int choice=0;
scanf("%d",&choice);
int no=0;int index;
switch(choice)//to select choice to delete and to insert
{
case 1:

       printf("\nenter the  number u want to insert\n");
       scanf("%d",&no);
       printf("\nenter the index u want to insert\n");
       scanf("%d",&index);
       for(int i=size;i>=0;i--)
       {
         if(i>=index)
         {

             a[i]=a[i-1];
         }

       }
       a[index]=no;
       printf("see ur changed array\n");
       for(int i=0;i<size+1;i++)
       {
           printf("%d\n",a[i]);

       }
break;
case 2: printf("\nenter the  number u want to delete\n");
       scanf("%d",&no);
       printf("\nenter the index u want to insert\n");
       scanf("%d",&index);
       for(int i=0;i<size-1;i++)
       {
           if(i>=index)
           {
             a[i]=a[i+1];
           }
       }
       printf("Yours deleted array\n");
       for(int i=0;i<size-1;i++)
       {
           printf("%d\n",a[i]);

       }
default:printf("no such number is needed pls try again");

}

printf("enter 1 if u want to proceed or else enter any no\n");
scanf("%d",t);
}
while(t==1);
}











}
