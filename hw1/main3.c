#include <stdio.h>
#include <string.h>

void binary_to_hex(const char *binary, char *hex) {
    unsigned int value = 0;
    for (int i = 0; i < 8; i++) {
        value = (value << 1) | (binary[i] - '0');
    }
    sprintf(hex, "%X", value);
}

int main() {
    char binary[] = "11001100";
    char hex[3];
    binary_to_hex(binary, hex);
    printf("%s\n", hex);
    return 0;
}
