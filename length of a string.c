#include<stdio.h>
int main(){
    char str[100];
    printf("enter the string :\n");
   gets(str);


int i=0;int ctr=0;
for(i=0;str[i]!='\0';i++);
printf("length of the string\n%d",i);

return 0;
}
