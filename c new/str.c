#include <stdio.h> 
#include <string.h> 
void main() 
{ 
    char first[100] = "fizika"; 
    char *a = first; 
    char second[100] = "dusheett"; 
    char *b = second; 

    strcat(a, b); 
    puts(a); 
    return 0; 
    
} 