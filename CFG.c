#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool checkCFG(char *str) {
    int len = strlen(str);
    if (len < 2 || str[0] != '0' || str[len - 1] != '1') {
        return false;
    }
    for (int i = 1; i < len - 1; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return false;
        }
    }
    return true;
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (checkCFG(input)) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does NOT belong to the language defined by the CFG.\n");
    }
    return 0;
}

Output:
Enter a string: 00001111
The string belongs to the language defined by the CFG.
Enter a string: 000111010
The string does NOT belong to the language defined by the CFG.
