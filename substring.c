#include<stdio.h>
int main()
{
char str[100];
char str1[100];
printf("enter the string\n");
gets(str);
printf("enter the sub string\n");
gets(str1);
int len=strlen(str);
int len1=strlen(str1);
int ctr1=0;
for(int i=0;i<len;i++)
{ int ctr=0;
  if(str[i]==str1[0])
{
 for(int j=0;j<len1;j++)
{
  if(str[i+j]==str1[j])
{
 ctr++;
 }
   }}
if(ctr==len1)
{
ctr1++;
}
}
if(ctr1>0)
{
printf("substring exist\t%d",ctr1);
}
else
{
printf("substring did not exist");
}
}
