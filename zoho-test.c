#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1024

int foo(char *data)
{
        int i = 0;
        int j = 0;
        int l = 0;
        int len = 0;
        int count = 0;

        len = strlen(data);
        l = len / 2;

        for (i = 0; i < len; i++) {
                for (j = 0; j <= count; j++) {
                        printf("%c", data[(l + j) % len]);
                }
                printf("\n");
                count++;
        }
        return 0;
}

int main(void)
{
        char *ret = NULL;
        char buf[MAX] = {0};

        ret = fgets(buf, sizeof (buf), stdin);
        buf[strlen(buf) - 1] = '\0';
        foo(buf);
        return 0;
}
