#include <stdio.h>

int main() {
char str[100];
int i, len, lower = 0, upper = 0, digit = 0, special = 0;

// Get string as input and store it in array
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);

// Remove newline character from the end of the string
len = 0;
while (str[len] != '\n') {
len++;
}
str[len] = '\0';

// Check string for required conditions
if (len == 8) {
for (i = 0; i < len; i++) {
if (str[i] >= 'a' && str[i] <= 'z') {
lower = 1;
}
else if (str[i] >= 'A' && str[i] <= 'Z') {
upper = 1;
}
else if (str[i] >= '0' && str[i] <= '9') {
digit = 1;
}
else if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*') {
special = 1;
}
}
}

// Print result based on checks
if (len == 8 && lower == 1 && upper == 1 && digit == 1 && special == 1) {
printf("The string meets the requirements.\n");
}
else {
printf("The string does not meet the requirements.\n");
}

return 0;
}