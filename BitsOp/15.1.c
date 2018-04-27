#include <stdio.h>
int meme(char *bit);
int main(void)
{
    char *bit = "01001001";
    printf("%s is %d\r\n", bit, meme(bit));
    return 0;
}
int meme(char *bit)
{
    int decados = 0;
    while(*bit != '\0')
        decados = (decados << 1) + *bit++ - '0';
    return decados;
}