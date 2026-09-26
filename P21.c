#include <stdio.h>
#include <string.h>

int main() {
    char original[100], reversed[100];
    int length, i, j;

    printf("Enter a string: ");
    scanf("%s", original);
    length = strlen(original);
    j = 0;
    for(i = length - 1; i >= 0; i--) {
        reversed[j] = original[i];
        j++;
    }
    reversed[j] = '\0'; 

    printf("Reversed string: %s\n", reversed);
    if (strcmp(original, reversed) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
