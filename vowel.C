#include<stdio.h>
int main()
{
char ch;
printf("enter the character:");
scanf("%c",&ch);
if(ch=='a'||'e'||'i'||'o'||'u')
{
printf("the character is vowel");
}
else
{
printf("the character is consonant");
}
return 0;
}
