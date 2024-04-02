#include <stdio.h> // searched for the STD_io library header; ends in .h extension
#include <cs50.h>  // CS50 compiler code
//? code hello.c

//? make hello

//? ./hello

int main(void)
{
    string answer = get_string("What is your name? ");
    // printf("Hello, world %s\n", answer);
    printf("Hello, world %s\n", answer);
}
