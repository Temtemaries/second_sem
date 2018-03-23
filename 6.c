//
//  main.c
//  meme6
//
//  Created by Артём Олев on 23.03.2018.
//  Copyright © 2018 Артём Олев. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float y;
    float x=2.55;
    y=3*powf(x,3)-5*powf(x,2)+6;
    printf("%f",y);
}
