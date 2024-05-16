/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main (){
    int numero =1;
     
     printf("digite o numero da tabuada desejada do 1 ao 10:");
     scanf ("%d", &numero);
     if (numero <1 || numero >10 ){
         printf("por favor digite um numero entre 1 a 10");
         return 1;
         
     }
     
     printf("tabuada do %d:\n", numero);
     
    int multiplicador =1;
        while (multiplicador <=10){
            printf ("%d x %d =%d\n",numero, multiplicador, numero* multiplicador);
            multiplicador++;
            
        }
       
        
    
    return 0;
}