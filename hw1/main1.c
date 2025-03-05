#include <stdio.h>
#include <string.h>

void run_length_encoding(const char *input, char *output) {
    int count = 1, j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == input[i + 1]) {
            count++;
        } else {
            output[j++] = input[i];
            if (count > 1) {
                output[j++] = count + '0';
            }
            count = 1;
        }
    }
    output[j] = '\0';
}

int main() {
    char input[] = "AABBBCCCCddd";
    char output[50];
    run_length_encoding(input, output);
    printf("%s\n", output);
    return 0;
}
