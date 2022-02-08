#include "main.h"
#include <stdio.h>

/**
 * _strspn - main function
 * @accept: string
 * @s: variable
 * Return: x
 */
unsigned int _strspn(char *s, char *accept)
                                                                     
{                                                                                                                
        int x, y;                                                                                                
        for (x = 0; s[x] != '\0'; x++)                                                                           
        {                                                                                                        
                for (y = 0; accept[x] != '\n'; y++)                                                              
                {                                                                                                
                        if (accept[y] == s[x])                                                                   
                        {                                                                                        
                                break;                                                                           
                        }                                                                                        
                        if (accept[y] == '\0')                                                                   
                        {                                                                                        
                                return (x);                                                                      
                        }                                                                                        
                }                                                                                                
        }                                                                                                        
        return (0);                                                                                              
}

