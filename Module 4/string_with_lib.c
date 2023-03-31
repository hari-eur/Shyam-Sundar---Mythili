/*2. Write a program to handle strings
    i) Get string as input and store it in array 
    ii) Check string if it is 8 character length, contains atleast one lowercase and uppercase,one number and one special character with and without string functions/char lib functions.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
char str[100];
int i, len, lower = 0, upper = 0, digit = 0, special = 0;

// Get string as input and store it in array
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);

// Remove newline character from the end of the string
len = strlen(str);
if (len > 0 && str[len-1] == '\n') {
str[--len] = '\0';
}

// Check string for required conditions without using string functions
for (i = 0; i < len; i++) {
if (islower(str[i])) {
lower = 1;
}
else if (isupper(str[i])) {
upper = 1;
}
else if (isdigit(str[i])) {
digit = 1;
}
else if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*') {
special = 1;
}
}

// Check string for required conditions using string functions
if (len == 8 && strspn(str, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*") == 8) {
printf("The string meets the requirements.\n");
}
else {
printf("The string does not meet the requirements.\n");
}

// Check string for required conditions without using string functions
if (len == 8 && lower == 1 && upper == 1 && digit == 1 && special == 1) {
printf("The string meets the requirements.\n");
}
else {
printf("The string does not meet the requirements.\n");
}

return 0;
}