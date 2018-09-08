#include <stdio.h>
#include "math.h"

typedef struct {
    char op;
    int num1;
    int num2;
    int result;
} Test;

int main() {

    Test tests[11];

    tests[0].op = '+';
    tests[0].num1 = 10;
    tests[0].num2 = -2;
    tests[0].result = 8;

    tests[1].op = '-';
    tests[1].num1 = 10;
    tests[1].num2 = -2;
    tests[1].result = 12;

    tests[2].op = '*';
    tests[2].num1 = 10;
    tests[2].num2 = -2;
    tests[2].result = -20;

    tests[3].op = '/';
    tests[3].num1 = 10;
    tests[3].num2 = -2;
    tests[3].result = -5;

    tests[4].op = '%';
    tests[4].num1 = 10;
    tests[4].num2 = -2;
    tests[4].result = 0;

    tests[5].op = '<';
    tests[5].num1 = 10;
    tests[5].num2 = 2;
    tests[5].result = 40;

    tests[6].op = '>';
    tests[6].num1 = 10;
    tests[6].num2 = 2;
    tests[6].result = 2;

    tests[7].op = '&';
    tests[7].num1 = 10;
    tests[7].num2 = 2;
    tests[7].result = 2;

    tests[8].op = '|';
    tests[8].num1 = 10;
    tests[8].num2 = 2;
    tests[8].result = 10;

    tests[9].op = '^';
    tests[9].num1 = 10;
    tests[9].num2 = 2;
    tests[9].result = 8;

    tests[10].op = '~';
    tests[10].num1 = 10;
    tests[10].num2 = -2;
    tests[10].result = -11;

    int passed = 0;
    int failed = 0;

    for (int i = 0; i < 11; i++) {
        int op = tests[i].op;
        int num1 = tests[i].num1;
        int num2 = tests[i].num2;
        int result = tests[i].result;

        int actual = math(num1, num2, op);

        printf("Testing %d %c %d = %d \t got %d %c %d = %d", num1, op, num2, result, num1, op, num2, actual);

        if (result == actual) {
            passed++;
            printf(" \t \e[1;32m✓\e[0m\n");
        } else {
            failed++;
            printf(" \t \e[1;31m✗\e[0m\n");
        }
    }

    printf("%d tests passed, %d tests failed\n", passed, failed);
}

