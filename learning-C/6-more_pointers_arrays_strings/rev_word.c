#include "main.h"
#include <string.h>
#include <stdlib.h>

void rev_word(char *s) {
    int len = strlen(s);
    char *temp = (char *)malloc(len + 1);
    
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    int i = 0, j = len - 1;

    while (i < len) {
        int start = i;
        while (i < len && s[i] != ' ') {
            temp[i - start] = s[i];
            i++;
        }

        int end = i - 1;

        while (start < end) {
            char t = temp[start];
            temp[start] = temp[end];
            temp[end] = t;
            start++;
            end--;
        }

        while (i < len && s[i] == ' ') {
            i++;
        }
    }

    temp[len] = '\0';

    // Copy the reversed words back to the original string
    strcpy(s, temp);
	printf("%s\n", s);

    free(temp);
}
