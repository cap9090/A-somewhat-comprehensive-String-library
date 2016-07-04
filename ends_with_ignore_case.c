int ends_with_ignore_case(char *s, char *suff){
    int i = 0, j = 0;
    while(s[i++]);
    while(suff[j++]);
    while(--j){
        if(tolower(s[--i]) != tolower(suff[j])) return 0;
    }
    return 1;
    
}

