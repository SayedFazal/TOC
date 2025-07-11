#include <stdio.h>
#include <string.h>
#define max 100

int main() {
    char input_string[max];
    printf("Enter a string: ");
    scanf("%s", input_string);

    int len = strlen(input_string);

    if (len == 0) {
        printf("Don't Accept (Empty string)\n");
    } else if (input_string[0] == '0' && input_string[len - 1] == '1') {
        printf("Accept\n");
    } else {
        printf("Don't Accept\n");
    }

    return 0;
}
