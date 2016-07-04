#include <stdlib.h>


int begins_with_ignore_case(char *s, char *pre){
    int i = 0;
    while(*(pre + i)){
        if(tolower(*(pre + i)) != tolower(*(s + i))) return 0;
        i++;
    }
    return 1;
}

