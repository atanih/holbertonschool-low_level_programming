#include "3-calc.h"

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, 98 on wrong args, 99 on invalid op, 100 on division error
*/
int main(int argc, char *argv[])
{
int a, b;
char *op;
int (*func)(int, int);

if (argc != 4)
{
printf("Usage: %s <number> <operator> <number>\n", argv[0]);
exit(98);
}

a = atoi(argv[1]);
op = argv[2];
b = atoi(argv[3]);

func = get_op_func(op);

if (func == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", func(a, b));

return (0);
}
