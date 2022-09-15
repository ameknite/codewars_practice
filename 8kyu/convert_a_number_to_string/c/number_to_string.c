#include <stdio.h>

char *number_to_string(int number)
{
    char *s;
    asprintf(&s, "%d", number);
    return s;
}
