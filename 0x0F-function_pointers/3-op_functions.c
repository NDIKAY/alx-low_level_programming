#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - Addition of two numbers
*@a: first number
*@b: Second number
*Return: The sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
*op_sub - substraction of two numbers
*@a: first number
*@b: Second number
*Return: The sub of a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
*op_mul - multiplication of two numbers
*@a: first number
*@b: Second number
*Return: The mul of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
*op_div - division of two numbers
*@a: first number
*@b: Second number
*Return: The div of a and b
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
*op_mod - modulo of two numbers
*@a: first number
*@b: Second number
*Return: The remain of a / b
*/
int op_mod(int a, int b)
{
return (a % b);
}

