#ifndef MYLIB_H
#define MYLIB_H
extern "C"  void my_putchar ( char c ) ;
extern "C"  int my_isneg(int nb);
extern "C"  int my_put_nbr( int nb) ;
extern "C"  void my_swap( int *a , int *b) ;
extern "C"  int my_putstr ( char const * str ) ;
extern "C"  int my_strlen ( char const * str ) ;
extern "C"  int my_getnbr(char const *str);
extern "C"  void my_sort_int_array ( int *tab , int size ) ;
extern "C"  int my_compute_power_rec ( int nb , int power ) ;
extern "C"  int my_compute_square_root ( int nb ) ;
extern "C"  int my_is_prime(int nb);
extern "C"  int my_find_prime_sup(int nb);
extern "C"  char *my_strcpy(char *dest, char const *src);
extern "C"  char *my_strncpy(char *dest , char const *src , int n);
extern "C"  char *my_revstr ( char * str ) ;
extern "C"  char * my_strstr ( char * str , char const *to_find ) ;
extern "C"  int my_strcmp(char const *s1, char const *s2);
extern "C"  int my_strncmp( char const *s1 , char const *s2 , int n);
extern "C"  char *my_strupcase ( char * str ) ;
extern "C"  char *my_strlowcase ( char * str ) ;
extern "C"  char *my_strcapitalize(char *str);
extern "C"  int my_str_isalpha ( char const * str ) ;
extern "C"  int my_str_isnum ( char const * str ) ;
extern "C"  int my_str_islower ( char const * str ) ;
extern "C"  int my_str_isupper ( char const * str ) ;
extern "C"  int my_str_isprintable ( char const * str ) ;
extern "C"  int my_showstr(char const *str);
extern "C"  int my_showmem(char const *str, int size);
extern "C"  char *my_strcat(char *dest, char const *src);
extern "C"  char *my_strncat ( char *dest , char const *src , int nb);
#endif
