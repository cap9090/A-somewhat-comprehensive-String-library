
#include <ctype.h>

int strcmp_ign_case(char * s1, char * s2){

    
    int i;
    for (i = 0; s1[i]; i++){
        if(s2[i] == '\0')
            return 1;
        if(tolower(s1[i]) != tolower(s2[i]))
            if(tolower(s1[i]) > tolower(s2[i]))
                return 1;
            else
                return -1;            
    }
    
    if(s2[i] != '\0')
        return -1;
    else
        return 0;
    
}

