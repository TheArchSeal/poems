                        // fibonacci.c

                        // open a dot c file
#include <stdio.h>      // include standard io
int main()              // int main parentheses
{                       // open curly bracket

    int a = 0;          // int a equals zero
    int b = 1;          // assign one to int b
    int c;              // declare c as int type
                        // no need to assign it

    for (int i = 0;     // for int i is zero
        i < 40;         // i is less than forty
        i++)            // increment with plus plus
    {                   // open curly bracket

        printf(         // print f parenthesis
            "%d\n",     // percent d and newline
            a           // next argument is a
        );              // close the parenthesis

        c = a + b;      // c is a plus b now
        a = b;          // a then takes b's value
        b = c;          // copy c into b
}}                      // lastly close both brackets

                        // turn into machine code
                        // with a c compiler
                        // execute the program
                        // there you have your sequence
