int find_index (char c, char * s){
    int i = 0;
    while (s[i]){
        if (s[i] == c) return i;
        i++;
    }
    return -1;
}

