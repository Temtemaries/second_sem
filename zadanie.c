//
//  main.c

//
//  Created by Артём Олев on 23.03.2018.
//  Copyright © 2018 Артём Олев. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>
int main(int argc, const char * argv[]) {

    double i=UINT_MAX;
    printf("signed int: %d   %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: %d %.lf\n", 0, i);
    printf("signed char: %d %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: %d %d\n", 0, UCHAR_MAX);
    printf("signed short: %d %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: %d %d\n", 0, USHRT_MAX);
    printf("signed long: %ld %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: %d %lu\n\n", 0, ULONG_MAX);
    return 0;
}
