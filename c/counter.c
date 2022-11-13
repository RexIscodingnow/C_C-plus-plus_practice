#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ½è¼Æ 1 ~ 100
int print_value1(int input_number);

int main(int argc, char const *argv[]) {
    int number;
    char counter_mode[2];
    printf("choose counter mode (1, 2, 3, 4)\n");
    
    if (!strcmp(counter_mode, "1")) {
        scanf("%d", &number);
        printf(print_value1(number));
    }
    system("pause");
    return 0;
}

int print_value1(int input_number) {
    for (int i = 1; i <= input_number; i++) {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
            return i;
        }
    }
}
