
#include <stdlib.h>


char * center (char * s , int width){
    /* if s.length + width is odd it can't be exactly center just so you know
     * if it is odd one side will have a space more than the other
       */
    
    int length = 0;
    while(s[length++]);
    if(width <= length) return s;
    int leftspace, rightspace, spaces = width - length;
    rightspace = leftspace = spaces/2;
   
    
    char *a;
    if ((a = (char *)malloc(width + 1)) == NULL) return NULL;
    int i = 0, j = -1;
    while( i < width ){
        if(i<=leftspace || i >= (leftspace + length))
            a[i++] = ' ';
        else
            a[i++] = s[++j]; 
    }
    a[i] = '\0';
    return a;
        
    
}

