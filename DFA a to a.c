#include <stdio.h>
#include <string.h>
#define max 20

int main() {
    char input_string[max];
    printf("Enter a string: ");
    scanf("%s", input_string);

    int l = strlen(input_string);

    if (l == 0) {
        printf("Don't Accept (Empty string)\n");
    } else if (input_string[0] == 'a' && input_string[l - 1] == 'a') {
        printf("Accept\n");
    } else {
        printf("Don't Accept\n");
    }

    return 0;
}
