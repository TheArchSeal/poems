                                                    // prime.c

                                                    // to calculate a prime
                                                    // it won't take too much time

                                                    // and if you know some c
                                                    // you will quickly see

#include <stdio.h>                                  // we can include some more tools
#include <string.h>                                 // from standard io, string and bools
#include <stdbool.h>
int main(void) {                                    // now let us define main
                                                    // it won't be too much pain

    bool p[1000];                                   // declare p a boolean array
                                                    // I'll make the size one thousand today

    memset(p, true, sizeof(p));                     // memset all of p to true
    p[0] = false;                                   // except for the first lest error ensue

    for (size_t i = 0; i < sizeof(p); i++) {        // then let i iterate over p
        if (p[i]) {                                 // if p at i, here is the key

                                                    // we have hit a prime number
                                                    // but there is still a bit more to cumber

                                                    // iterate once more
            for (                                   // with another for

                size_t j = (i + 1) * (i + 1) - 1;   // from j as i plus one squared minus one
                j < sizeof(p);                      // again, all through p, isn't this fun

                j += i + 1                          // jump in steps of the successor of i
            ) { p[j] = false;                       // and set p at j to false, whereby

                                                    // multiples of primes are removed from the list
                                                    // eventually, only primes persist

            }                                       // outside the loop but still in the if
            printf("%lu\n", i + 1);                 // print i plus one to read its glyph

}}}                                                 // close all scopes at last
                                                    // I promise this algorithm is fast

                                                    // now all that's left is to compile
                                                    // and run the executable file

                                                    // yes, this code was tested
                                                    // so here are the primes as requested
