#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;
    printf("hello");
   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };
    printf("I'm in main function");
   for (i = 0; i < 2; ++i)
{
  printf("Trying to merge changes in two branches");    
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
}
   return 0;
}
