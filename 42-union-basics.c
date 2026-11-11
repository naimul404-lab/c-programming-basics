
#include <stdio.h>
#include <string.h>

union Data {
    int number;
    float decimal;
    char text[20];
};

int main() {
    union Data data;

    data.number = 100;

    printf("Integer value: %d\n", data.number);

    data.decimal = 25.5;

    printf("Float value: %.2f\n", data.decimal);

    strcpy(data.text, "Hello C");

    printf("String value: %s\n", data.text);

    return 0;
}
