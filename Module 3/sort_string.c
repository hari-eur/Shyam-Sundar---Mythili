[09:15] Shyam Sundar Giri
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void sortString(char* str);
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    sortString(str);
    printf("Sorted string: %s", str);
    return 0;
}
void sortString(char* str) {
    int i, j, n = strlen(str);
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (isdigit(str[i]) && isdigit(str[j])) {
                if (str[i] > str[j]) {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
            else if (isalpha(str[i]) && isalpha(str[j])) {
                if (str[i] > str[j]) {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
            else if (isdigit(str[i])) {
                if (str[i] > str[j]) {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    }
}

