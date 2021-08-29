#include <stdio.h>
#include <stdlib.h>

#define EXTEND_SIZE 20

/* an initial empty dictionary */
char **dictionary = NULL;
int  num_words = 0;
int  max_words = 0;

/* extends the dictionary in steps of 20 words */
void extend_dictionary ( void ) {
    if ( num_words == max_words ) {
        void *temp;
        int   new_size = max_words + EXTEND_SIZE;
        temp = realloc( dictionary, new_size * sizeof(dictionary[0]) );
        if ( temp != NULL ) {
            dictionary = temp;
            max_words = new_size;
        }
    }
}

/* make a copy of a string */
char *dup_string ( char *word ) {
    char *temp = malloc( strlen(word) + 1 );
    if ( temp != NULL ) {
        strcpy( temp, word );
    }
    return temp;
}

void add_word ( char *word ) {
    extend_dictionary();
    dictionary[num_words++] = dup_string( word );
}

/* sort words, for use by the qsort function */
int compare_fn ( const void *a, const void *b ) {
    char * const *pa = a;
    char * const *pb = b;
    return strcmp( *pa, *pb );
}

int main ( ) {
    int i;

    add_word( "Now" );
    add_word( "is" );
    add_word( "the" );
    add_word( "time" );
    add_word( "for" );
    add_word( "all" );
    add_word( "good" );
    add_word( "men" );

    qsort( dictionary, num_words, sizeof(dictionary[0]), compare_fn );

    for ( i = 0 ; i < num_words ; i++ ) {
        printf( "Word %d is %s\n", i, dictionary[i] );
    }
    return 0; 
}
