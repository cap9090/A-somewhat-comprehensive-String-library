#include <ctype.h>

void rstrip(char *s){
    int i = -1;
    while(s[++i]);
    while(isspace(s[--i]));
    s[++i] = '\0';
}

