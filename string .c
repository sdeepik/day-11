#include <stdio.h>
#include<ctype.h>
int main()
{
   char str[1000];
   printf("Enter a string:");
   fgets(str,sizeof(str),stdin);
   for (int i =0 ; str[i]!='\0';++i){
   if (str[i]>='a' && str[i] <='z')
   {
       str[i] = str[i] -32;
   } 
   }
  printf("Uppercsa string: %s\n", str);
  return 0; 
}
