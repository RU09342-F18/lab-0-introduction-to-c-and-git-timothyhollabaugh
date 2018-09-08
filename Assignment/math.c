/*
 * math.c
 *
 *  Created on: Sept 7, 2018
 *
 */

/*
 * math(int num1, int num2, char Operator)
 *
 * perform a math operation on num1 and num2
 *
 * Supported operations:
 *
 *  '+' -> Add (num1 + num2)
 *  '-' -> Subtract (num1 - num2)
 *  '*' -> Multiply (num1 * num2)
 *  '/' -> Divide (num1 / num2)
 *  '%' -> Modulus (num1 % num2)
 *  '<' Left bit shift (num1 << num2)
 *  '>' Right bit shift (num1 >> num2)
 *  '&' Bitwise AND (num1 & num2)
 *  '|' Bitwise OR (num1 | num2)
 *  '^' Bitwise XOR (num1 ^ num2)
 *  '~' Bitwise invert (~num1)
 *
 *  In the case of '/' or '%' and num2 is zero, zero is returned
 *  In the case of '<' or '>' and num2 is negative, num1 is returned
 *  In the case of '~', num2 is ignored
 *
 */

int math(int num1, int num2, char Operator) {
    switch (Operator) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num2 == 0 ? 0 : num1 / num2;
        case '%': return num2 == 0 ? 0 : num1 % num2;
        case '<': return num2 > 0 ? num1 << num2 : num1;
        case '>': return num2 > 0 ? num1 >> num2 : num1;
        case '&': return num1 & num2;
        case '|': return num1 | num2;
        case '^': return num1 ^ num2;
        case '~': return ~num1;
    }
}
