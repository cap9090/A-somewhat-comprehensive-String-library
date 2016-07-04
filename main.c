/* 
 * File:   main.c
 * Author: test
 *
 * Created on March 14, 2014, 8:48 PM
 */


#include <stdio.h>
#include "mystringlib.h"
/*
 * 
 */

int main(int argc, char** argv) {
    
    
    char *s = "Tennessee";
    s = slice(s, 3, 6);
    printf("%s\n", s);
    //slice is successful

    char *b = "ness";
    char *a = "neas";
    printf("%d\n", index_of_first_difference(a,b));
    //index_of_first_difference successful
    printf("%d\n", strcmp_ign_case(a, b));
    //strcmp ign case is successful
    
    char l[] = "   foo    ";
    lstrip(l);
    printf("%s", l);    
    rstrip(l);
    printf("%s", l);
    char ll[]= "   foo    ";
    strip(ll);
    printf("%s\n", ll);
    //all strip functions successful
        
    char a2[] = "sleep";
    char * a1= center(a2, 11);
    printf("%s%s", a1, "hi\n");
    //center function successful
    
    char r[] = "apple";
    char r1[] = "jkasjlfle";
    printf("%d\n", ends_with_ignore_case(r, "ploe"));
    /*ends with works correctly*/
    
    char sqdjkp[] = "   7 ";
    printf("%d\n", is_blank(sqdjkp));
    /*is blank works correctly*/
    
    char akdjo[] ="apply";
    char akj[] = "app";
    char jjjk[] = "ly";
    printf("%d\n", begins_with_ignore_case(akdjo, akj));
    printf("%d\n", ends_with_ignore_case(akdjo, jjjk));
    printf("%d\n", find_index('y',akdjo));
    /*begins with ignore case and ends with ignore case and find index works correctly*/
    
    
    char q[] = "Who lives in a pineapple under the sea hello hello";
    char *jkj= ellipsize(&q, 5);
    printf("%s", &jkj );
    
    
    char po[] = "fiore x";
    char aaa[] = "x";
    char x[] = "sucks";
    char *anss = replace(po,aaa, x);
    printf("%s\n", replace("fiore x", "x", "sucks"));
    
    
    
    
     
    
    
    
    
    
    char a3 [] = "all right";
    printf("%s\n", repeat(a3, 3));
    printf("-----------------------------\n");

    
    
    
    
    

    
    
    return (0);
}

