#include "3-calc.h"
int op_add(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - return soum of a & b
 * @a: integer
 * @b: integer
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - The diference between two integers
 * @a: integer
 * @b: integer
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - The product of a dn b
 * @a: integer
 * @b: integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Division of a and b
 * @a: integer
 * @b: integer
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Reminder of division of a and b
 * @a: integer
 * @b: integer
 * Return: Remeinder of a and b
 */
int op_mod(int a, int b)
{
return (a % b);
}
