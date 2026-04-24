#include "3-calc.h"

/**
* get_op_func - Selects correct operation function
* @s: The operator passed as argument
*
* Return: Pointer to the function or NULL if invalid
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i;

if (s == NULL || s[1] != '\0')
return (NULL);

i = 0;
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}

return (NULL);
}
