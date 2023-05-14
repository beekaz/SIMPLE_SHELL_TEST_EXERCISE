#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100

char **splitString(const char *str)
{
    char **words = (char **)malloc(MAX_WORDS * sizeof(char *));
    if (words == NULL)
    {
        return NULL;
    }

    char *token;
    char *delimiter = " \t\n"; // Delimiters: space, tab, newline
    int wordCount = 0;

    // Tokenize the string
    token = strtok((char *)str, delimiter);
    while (token != NULL && wordCount < MAX_WORDS)
    {
        words[wordCount] = (char *)malloc((strlen(token) + 1) * sizeof(char));
        if (words[wordCount] == NULL)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }
        strcpy(words[wordCount], token);
        wordCount++;
        token = strtok(NULL, delimiter);
    }
    words[wordCount] = NULL; // Set the last element to NULL for indicating the end of the array
                             // EOF: End Of File
    return words;
}

int main()
{
    const char *input = "Hello world! How are you?";
    char **words = splitString(input);

    int i = 0;
    while (words[i] != NULL)
    {
        printf("%s\n", words[i]);
        free(words[i]);
        i++;
    }
    free(words);

    return 0;
}
