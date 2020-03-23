#include <stdio.h>

int add(int a,int b)
{
return (a+b);
}
char *my_strlen(char *s)
{

   char *p = t;

   while (*t++==*s++)

   //char *p = s;
    //const char *p=s;
     return p;
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}
