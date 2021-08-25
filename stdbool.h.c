#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool a=true;
    bool b=false;
    printf("%d\n", a&&b);
    printf("%d\n", a||b);
    printf("%d\n", !b);
}
