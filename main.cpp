/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Patricia
 *
 * Created on 26 de mayo de 2021, 12:37
 */
#include<stdio.h>
#include <cstdlib>

using namespace std;

/*
 * 
 */

void sumar (int,int);
int x;
int *p=&x;
int main(void) 
{

    printf("Hola Mundo\n");
    sumar(2,3);
    printf("Resultado:%d",*p);
    
    
    return 0;
}

void sumar (int t,int b)
{
*p=(t+b);
}



