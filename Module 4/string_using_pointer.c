
 #include <stdio.h>
#include <string.h>

void print_permutations(char *str, int l, int r);

int main() {
char str[100];
int i, len, lower = 0, upper = 0, digit = 0, special = 0;

// Get string as input and store it in array
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);

// Remove newline character from the end of the string
len = strlen(str);
if (len > 0 && str[len-1] == '\n') {
str[len-1] = '\0';
len--;
}

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

// Generate permutations of the string using pointers
printf("Permutations:\n");
print_permutations(str, 0, len-1);
}
else {
printf("The string does not meet the requirements.\n");
}

return 0;
}

// Recursive function to generate permutations of a string using pointers
void print_permutations(char *str, int l, int r) {
int i;
if (l == r) {
printf("%s\n", str);
}
else {
for (i = l; i <= r; i++) {
char temp = *(str+l);
*(str+l) = *(str+i);
*(str+i) = temp;

print_permutations(str, l+1, r);

temp = *(str+l);
*(str+l) = *(str+i);
*(str+i) = temp;
}
}
}