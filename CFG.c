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
How many states in the NFA with e-moves: 3
How many symbols in the input alphabet including e: 3
Enter the symbols without space. Give 'e' first: e01
How many transitions from state 0 for the input e: 1
Enter state 1 for transition 1 from state 0 on input e: 1
How many transitions from state 0 for the input 0: 0
How many transitions from state 0 for the input 1: 1
Enter state 1 for transition 1 from state 0 on input 1: 1
How many transitions from state 1 for the input e: 1
Enter state 1 for transition 1 from state 1 on input e: 2
How many transitions from state 1 for the input 0: 2
Enter state 1 for transition 1 from state 1 on input 0: 0
Enter state 2 for transition 2 from state 1 on input 0: 1
How many transitions from state 1 for the input 1: 0
How many transitions from state 2 for the input e: 0
How many transitions from state 2 for the input 0: 0
How many transitions from state 2 for the input 1: 0
e-closure(0) = {0, 1, 2}
e-closure(1) = {1, 2}
e-closure(2) = {2}
