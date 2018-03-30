//
//  main.c
//  ,,
//
//  Created by Артём Олев on 30.03.2018.
//  Copyright © 2018 Артём Олев. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float x, y;
    char operator;
    
    scanf("%f %c", &y, &operator);
    if (operator == 'S')
    {
        printf("= %.1f\n", y);
        while (operator != 'E')
        {
            scanf("%f %c", &x, &operator);
            switch (operator)
            {
                case '+':
                    printf("= %.1f\n", y += x);
                    break;
                case '-':
                    printf("= %.1f\n", y -= x);
                    break;
                case '*':
                    printf("= %.1f\n", y *= x);
                    break;
                case '/':
                    if (x == 0)
                        printf("Error\n");
                    else
                        printf("= %.1f\n", y /= x);
                    break;
                default:
                    if (operator != 'E' && operator != 'S')
                        printf("Incorrect Operator\n");
            }
        }
    }
    else if (operator != 'S' && operator !='E')
    {
        printf("try again\n");
    }
    
    return 0;
}
