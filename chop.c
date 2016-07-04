#include <stdlib.h>



char **chop(char * s, char c){
    int wc = 1;//start at 1 to include the null pointer
    int a = -1;
    while(s[++a]){
        if(s[a] == c)
            wc++;
    }
    char **ans;
    if((ans = (char **)calloc(wc, sizeof(char*))) == NULL) 
        return NULL;
    int i= -1, j = 0, k = 0; //remember k must be less than wc
    
    while(s[++i]){
        if(s[i] != c){
            *(ans + k) [j++] = s[i];
        }
        else //s[i] == c
        {
            *(ans + k) [j] = '\0';
            k++; j = 0;
        }
    } 
    if (j) // j!= 0
    {
        *(ans + k) [j] = '\0';
        k++;
        *(ans + k) = NULL;
    }
    
    return ans;
    
    
    /*
    while (s[++i]){
        if(s[i] == c){
            int temp = j;
            j = i - j;
            int b = -1;
            ans[++k] = (char*)calloc(j, sizeof(char));
            while(temp < j){
                *ans[++b] = s[temp]; temp ++;
            }
            *ans[b] = '\0';
        }
    }*/
}

