#include <stdlib.h>

char * replace(char *s, char *pat, char *rep){
    int lenpat = 0;
    while(pat[lenpat++]);
    int lenrep = 0;
    while(rep[lenrep++]);
    //determine how many times pat occurs in s
    int count = 0;
    int lens = 0;
    while(s[lens++]);
    int help = 0;
    int i = -1;
    while(s[++i]){
        if(s[i] == pat[i])
            help++;
        else
            help = 0;
        if(help == lenpat){
            count ++;
            help = 0;
        }
        
    }
    
    //we need to remove count*lenpat spots and add count*lenrep spots to lens
    lens = lens - count*lenpat + count*lenrep;
    char * ans;
    if((ans = (char *)calloc(lens, sizeof(char))) == NULL) return NULL;
    help = 0;
    i = -1;
    while(ans[++i]){
        ans[i] = s[i];
        if(s[i] == pat[i])
            help++;
        else
            help = 0;
        if(help == lenpat){
            i -= lenpat -1;
            int j;
            for(j = 0; j< lenrep; j++, i++){
                ans[i] = rep[j];
            }
            help = 0; 
        }
        
        
    }
    ans[i] = '\0';
    return ans;

}
