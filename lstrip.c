#include <ctype.h>

void lstrip(char *s){
   int i = -1, start = 0;;
   while(isspace(s[++i]));
   while(s[start])
       s[start++] = s[i++];
   s[start] = '\0'; 
   /*start was prob a bad name but it works*/
}

