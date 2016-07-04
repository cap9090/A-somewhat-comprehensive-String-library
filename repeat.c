#include <stdlib.h>


char * repeat(char *s, int x){
    if(s == NULL) return NULL;
    int i = 0, j = 0;
    while(s[i++]);
    char *ans;
    if ((ans = (char * )calloc (i*x, sizeof(char))) == NULL) return NULL;
    i = 0;
    for(; j< x; j ++){
        while(s[i]){
            ans[i] = s[i]; i++;
        }
        if(j == x -1)
                ans[i] = '\0'; // we can do this because we determined the lenght of s including the null character
        else
            ans[i] = ' ';
        i = 0;
    }
    
    
}

