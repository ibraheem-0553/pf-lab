#include <stdio.h>
#include <string.h>
void reverse(char str[], int index) {
    if (str[index] == '\0') {
        return; 
    }
    reverse(str, index + 1); 
    printf("%c", str[index]); 
}
int main() {
    char message[100];
    printf("Enter the secret message (backward): ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0; 
    printf("Decoded message: ");
    reverse(message, 0);
    printf("\n");

    return 0;
}

