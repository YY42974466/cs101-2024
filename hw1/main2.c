#include <stdio.h>
#include <ctype.h>

void run_length_decoding(const char *input, char *output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i + 1])) {
            int count = input[i + 1] - '0';
            for (int k = 0; k < count; k++) {
                output[j++] = input[i];
            }
            i++;
        } else {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';
}

int main() {
    char input[] = "A2B3C4d3";
    char output[50];
    run_length_decoding(input, output);
    printf("%s\n", output);
    return 0;
}
