#include <stdlib.h>
#include <ctype.h>




char * remove_chars(char *s1, char *s2){
    char *ans;
    int i = 0 , count = 0; int j = -1; 
    while (s2[++j]){
        while(s2[i]){
        if(tolower(s1[i]) == tolower(s2[j])) 
            count ++; 
        i++;
        }
    }
    
    i = 0;
    while(s1[i++]);
    i -= count;
    if ((ans = (char *)calloc(i, sizeof(char))) == NULL) return NULL;
    i = -1; j = 0; int k = -1;
    while(s1[++i]){ 
        while(s2[++k]){
        if(tolower(s1[i]) != tolower(s2[k]))
            ans[j++] =  s1[i];
        }
    }
    return ans;
}

