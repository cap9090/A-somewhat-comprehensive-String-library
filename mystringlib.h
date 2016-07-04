/* 
 * File:   mystringlib.h
 * Author: CAP
 *
 * 
 */

#ifndef MYSTRINGLIB_H
#define	MYSTRINGLIB_H

#ifdef	__cplusplus
extern "C" {
#endif

    int is_blank(char *);
    int find_index(char , char *);
    char * find_ptr(char, char *);
    char * make_space(int );
    char * center ( char *, int);
    int begins_with_ignore_case(char * , char *);
    int ends_with_ignore_case(char *, char *);
    char * remove_chars(char *, char *);
    int index_of_first_difference(char * , char *);
    void lstrip(char *);
    void rstrip(char *);
    void strip(char *);
    char * repeat(char *, int );
    char * slice(char *, int, int);
    int strcmp_ign_case(char *, char *);
    char * ellipsize(char *, int);
    char * replace ( char *, char *, char *);
    char ** chop(char * , char *);


#ifdef	__cplusplus
}
#endif

#endif	/* MYSTRINGLIB_H */

