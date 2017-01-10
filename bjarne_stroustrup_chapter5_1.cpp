/*
 * bjarne_stroustrup_5.9_1.cpp
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
    /*
     * 1. (*1) Напишите следующие объявления: указатель на символ, массив из 10
    целых, ссылка на массив из 10 целых, указатель на массив строк, указатель на
    указатель на символ, целая константа, указатель на целую константу,
    константный указатель на целое. Проинициализируйте все объекты.
    * */
    char temp_char = 'a';
    char* ch_pointer = &temp_char;
    int array[10] = { 1, -41, 34, 22, 55, -190, -256, -144, 65538, 2};
    int (&array_link)[10] = array;
    for(unsigned i=0; i<10; ++i)
    {
        cout << array_link[i] << '\t';
    }

    string (str_arr)[] = { "Hello, ", "world!"};
    string *str_arr_pointer = str_arr;
    cout << '\n' << str_arr_pointer[0] << '\t';
    cout << str_arr_pointer[1] << '\t';
    char** ch_p_p = &ch_pointer;
    cout << '\n' << "**ch_p_p = " << **ch_p_p << '\t';
    const int factor5 = 120;
    const int* factor5_p_to_const = &factor5;
    cout << '\n' << "*factor5_p_to_const = " << *factor5_p_to_const << '\t';
    int* const const_pointer = &array[8];
    cout << '\n' << "*const_pointer = " << *const_pointer << '\t';

    /*
    * 2. (*1.5) Каковы на вашей системе ограничения на значения указателей типа
    char*, int* и void*? Например, может ли int* иметь нечетное значение
    (подсказка: подумайте о выравнивании)?
    */
    cout << "\n2.\nAdress difference for closest int* = " << abs((long)&array[1] - (long)&array[0]);
    cout << ",\n adresses respectively are {0,1} : "<< &array[0] << ", " << &array[1];

<<<<<<< HEAD
    char (*pa)[8];
    char cstring[8] = "ab";
=======
    char (*pa)[3];
    char cstring[3] = "ab";
>>>>>>> 7e878e3ae2ff05d87316c4884c60601602ed9851
    pa = &cstring;
    cout << ",\nadress difference for closest char* = " << abs(reinterpret_cast<long>(&pa[1]) - reinterpret_cast<long>(&pa[0]));
    cout << ",\n adresses respectively are {0,1}: " << &pa[0] << ", " <<  &pa[1];
    cout << ",\nadress difference for next closest char* = " << abs(reinterpret_cast<long>(&pa[2]) - reinterpret_cast<long>(&pa[1]));
    cout << ",\n adresses respectively are {0,1}: " << &pa[1] << ", " <<  &pa[2];

    void* vp0, * vp1;
    //is char smallest?
    vp0 = pa[0];
    vp1 = pa[1];
    cout << ",\nadress difference for closest void* = " << abs(reinterpret_cast<long>(&vp1) - reinterpret_cast<long>(&vp0));
    cout << ",\n adresses respectively are {0,1}: " << &vp0 << ", " <<  &vp1;
    return 0;
}

