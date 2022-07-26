#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.c"
int main()
{

    binarynumber=(char*) malloc(sizeof (char));
    memset(binarynumber, '\0', sizeof(binarynumber)) ;
    char*hexanumber=(char*) malloc(sizeof (char));
    memset(hexanumber, '\0', sizeof(hexanumber)) ;
    printf("Please enter the value of the hexadecimal number:");
    scanf("%s",hexanumber);
    printf("\n the binary format is:");
    HexaToBin(hexanumber);
    printf("%s",binarynumber);
    printf("\n");
    Presence_Of_DE(binarynumber);
 return 0;
}

