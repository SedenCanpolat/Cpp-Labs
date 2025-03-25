#include "Operation.h"


double Add::Result(void)
{
	return left + right;
}


double Subtract::Result(void)
{
	return left - right;
}


double Multiply::Result(void)
{
	return left * right;
}


double Divide::Result(void)
{
	return left / right;
}
