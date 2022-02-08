#include "holberton.h"

/**
* reverse_array -main function
*
*@a: string
*@n: variable
* Return:dest
*/


void reverse_array(int *a, int n)
{
/* three variables, temp, start & end; */
int temp, start = 0, end = n - 1;
while (start < end)
{
temp = a[end];
a[end] = a[start];
a[start] = temp;
start++;
end--;

}
}
