//
// Created by Maria Hilda Bermejo on 4/30/20.
//

#include "UFunciones.h"



unsigned int   cociente(unsigned int dividendo, unsigned int divisor)
{
  if( dividendo < divisor)
      return 0;
  return 1 + cociente(dividendo-divisor, divisor);
}


/*
 cociente( 17, 3) =  17 - 3  = 14     (1)
                     14 - 3  = 11     (2)
                     11 - 3  =  8     (3)
                     8  - 3  = 5      (4)
                     5  - 3  = 2      (5)

 */



unsigned int   Factorial(unsigned int n)
{
    if( n==0 || n==1)
        return 1;
    return n * Factorial(n-1);
}


unsigned int   producto(unsigned int n1, unsigned int n2)
{
   if(n2==1)
       return n1;
   return n1 + producto(n1, n2-1);
}


/*

producto( 5, 4) = 5 + 5 + 5 + 5
producto(5, 4) = 20


 producto(5, 4) = 5 +  producto(5,3)
                          5 + producto(5,2)
                                 5 + producto(5,1)  caso base  cuando el multiplicados == 1
                                         5

 */