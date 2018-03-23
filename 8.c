//
//  main.c
//  8
//
//  Created by Артём Олев on 23.03.2018.
//  Copyright © 2018 Артём Олев. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
        int i = 365;
        int j = 7;
        i = i + j - i % j;
        printf("%d", i);
    return 0;
}
