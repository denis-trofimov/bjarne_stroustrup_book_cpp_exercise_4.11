/*
 * c5e2_what_are the restrictions_on_the_pointer_types.cpp
 *
 * (∗1.5) What, on your system, are the restrictions on the pointer types char*,
 *  i in nt t*, and v vo oi id d*?
 * For example, may an i in nt t* have an odd value? Hint: alignment.
 *
 * 2. (*1.5) Каковы на вашей системе ограничения на значения указателей типа
 * char*, int* и void*? Например, может ли int* иметь нечетное значение
 * (подсказка: подумайте о выравнивании)?
 *
 * Copyright 2017 Denis Trofimov <silaradost@yandex.ru>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
    int array[2] = { 1, -41};

    cout << "\n2.\nAdress difference for closest int* = " << abs((long)&array[1] - (long)&array[0]);
    cout << ",\n adresses respectively are {0,1} : "<< &array[0] << ", " << &array[1];

    char c0 = 'a', c1 = 'z';
    char *p0 = &c0, *p1 = &c1;
    cout << ",\nadress difference for closest char* = " << abs(long(p1) - long(p0));
    cout << ",\n adresses respectively are {0,1}: " << long(p0) << ", " <<  long(p1);
    //is char smallest?
    void* vp0  = p0, * vp1  = p1;

    cout << ",\nadress difference for closest void* = " << abs(long(vp1) - long(vp0));
    cout << ",\n adresses respectively are {0,1}: " << vp0 << ", " <<  vp1;
    return 0;
}

