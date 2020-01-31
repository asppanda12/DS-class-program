//reverse the string as well as copy the  string
#include<stdio.h>
void reverse(char str[50],char str1[50])
{
    int i=0;int j=0;
for(i=0;str[i]!='\0';i++);
for(j=i-1;j>=0;j--)
{

    str1[i-1-j]=str[j];

}
str1[i]='\0';
}
int main()
{
    char str1[50];char str[50];
    printf("enter the string\n");
    gets(str);
    reverse(str,str1);
    printf("the reversed string:\n%s",str1);
}

