#include <stdlib.h>


char * slice( char * s, int b , int e){
    if(e <b) return NULL; 
    char *ans;
    if ((ans = (char * )malloc(e - b + 1)) ==  NULL) return NULL;
    int i, j;
    for (i = 0 , j = b; j<= e; i++, j++)
        ans[i] = s[j];
     ans[i] = '\0';
     return ans;
}

