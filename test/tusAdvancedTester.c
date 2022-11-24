#include "holberton.h"
#include <stdio.h>
#include <limits.h>
void tusAdvancedTester()
{
printf("START OF TEST\n");

//b
printf("=====================\n");
printf("*****BINARY*****\n");
printf("=====================\n");
int b = 4312;
int alen, elen;
printf("Expected   : %i\n", 1111011);
_printf("Actual     : %b\n", 123);
elen = printf("Expected   : %lu\n", 1000011011000);
alen = _printf("Actual     : %b\n", b);
printf("Expected   : %i\n", elen);
_printf("Actual     : %i\n", alen);
printf("Expected   : %i\n", 0);
_printf("Actual     : %b\n", 0);

//x	
int h = 32425;
printf("=====================\n");
printf("*****HEXA*****\n");	
printf("=====================\n");
printf("Expected   : %x\n", 995);
_printf("Actual     : %x\n", 995);
alen = printf("Expected   : %x\n", -1);
elen = _printf("Actual     : %x\n", -1);
printf("Expected   : %i\n", alen);
_printf("Actual     : %i\n", elen);
alen = printf("Expected   : %x\n", 0);
elen = _printf("Actual     : %x\n", 0);
printf("Expected   : %x\n", alen);
_printf("Actual     : %x\n", elen);
printf("Expected   : %x\n", 1);
_printf("Actual     : %x\n", 1);
elen = printf("Expected   : %x\n", h);
alen = _printf("Actual     : %x\n", h);
printf("Expected   : %i\n", elen);
_printf("Actual     : %i\n", alen);
printf("Expected   : %x\n", INT_MAX);
_printf("Actual     : %x\n", INT_MAX);
printf("Expected   : %x\n", INT_MIN);
_printf("Actual     : %x\n", INT_MIN);
printf("Expected   : %x\n", 0);
_printf("Actual     : %x\n", 0);
//X

