/*
 * math.c
 *  Created on: Sep 9, 2018
 *      Author: Shane Price
 * Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int math(int num1, int num2, char Operator) {
    switch(Operator) {
        case '+' : return(num1+num2); //addition
        break;
        case '-' : return(num1-num2);//subtraction
        break;
        case '*' : return(num1*num2);//multiply
        break;
        case '/' : return(num1/num2);//divide
        break;
        case '%' : return(num1%num2);//modulus
        break;
        case '<' : return(num1<<num2);//shift left
        break;
        case '>' : return(num1>>num2);//shift Right
        break;
        case '&' : return(num1&num2);//bitwise and
        break;
        case '|' : return(num1|num2);//bitwise or
        break;
        case '^' : return(num1^num2);//bitwise xor
        break;
        case '~' : return(~num1);//bitwise inverse
        break;
        default: printf("Invalid Operator entered");//prints if none of the above operators were entered
        break;
    }
}
    return 0;
}
