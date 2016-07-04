

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


char *ellipsize(char *s, int nw){
/*
    int wordct = 0;
    int i = 0;
    int hi = 0;
    while(!isalpha(s[i])){
        if(!s[i]) 
            return s;
        i++;
    }
    while(s[i]){
        while(isalpha(s[i])){ 
            hi = 1;
            i++;
        }
        if(hi){
            wordct++;
            hi = 0;
            if(wordct == nw) break;
        }
        while(isspace(s[i]))
            i++;
    }
    
    if(wordct < nw)
        return s;
    
    s[i++] = '.';
    s[i++] = '.';
    s[i++] = '.';
    s[i] = '\0';
    
    return s;
*/
        printf("did we get here?");

    int wc =0, i = 0;
    while(isspace(s[i])){
        i++;
    }
    while(s[i] || wc != nw){
        if(s[i] == ' '){
            wc++;
        }
        i++;
    }
    
        printf("did we get here?");

    if (wc != nw)
        return NULL;
    printf("did we get here?");

    char *ans1;
    if((ans1 = (char *)malloc(i+3))== NULL) 
        return NULL;
        printf("did we get here?");

    int length = i;
    for (i = 0; i < (length -4); i++)
        ans1[i] = s[i];
    
    ans1[i] = '.';   i++; 
    ans1[i] = '.';   i++;
    ans1[i] = '.';   i++;
    ans1[i] = '\0';
    
    return ans1;


    
    
    
    
    
    
}

