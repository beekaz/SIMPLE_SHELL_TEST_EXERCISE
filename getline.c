#include <stdio.h>
#include <stdlib.h>

ssize_t read(char **line, size_t *len)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    printf("$Theo: ");

    while ((read = getline(&line, &len, stdin)) != -1)
    {
        printf("%s", line);

        printf("$Theo: ");
    }
    free(line);
    return 0;
}
