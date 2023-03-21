#include <stdio.h>
#include <stdarg.h>
#define PRINT(fmt, ...) printf(fmt, ##__VA_ARGS__)
int main() {
    char* data = "Macro String Printer";
    char* data_1 = "Alice";
    char* data_2 = "In Wonderland";
    PRINT("Welcome to %s\n", data);
    PRINT("Hello to %s: Welcome to %s\n", data_1, data_2);
    return 0;
}