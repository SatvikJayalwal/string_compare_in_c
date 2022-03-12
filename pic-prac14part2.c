#include <stdio.h>  
#include<string.h>  
int main()  
{  
   printf("\nThis program compare two strings\n");
   char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array  
   int value; // declaration of integer variable  
   printf("\nEnter the first string : ");  
   scanf("%s",str1);  
   printf("\nEnter the second string : ");  
   scanf("%s",str2);  
   // comparing both the strings using strcmp() function  
   value=strcmp(str1,str2);  
   if(value==0)  
   printf("\nStrings are same");  
   else  
   printf("\nStrings are not same");  
   return 0;  
}  