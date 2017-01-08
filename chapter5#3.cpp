/*
 * chapter5#3.cpp
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
 *3. (*1) Используйте typede/ддя определения типов: unsigned char, const unsigned
char, указатель на целое, указатель на указатель на char, указатель на массив
char, массив из 7 указателей на int, указатель на массив из 7 указателей на int
и массив из 8 массивов по 7 указателей на целые.
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    typedef unsigned char uchar;
    typedef const unsigned char cuchar;
    typedef int* int_p;
    typedef char** char_p_p;
    typedef char(*char_a_p)[11];
    //i don't like it:have to use same size as "chapter5#3"
    //error: cannot convert ‘char (*)[11]’ to ‘char_a_p {aka char (*)[]}’ in initialization
    {
        char ch[] = "chapter5#3";
        char_a_p test = &ch;
        cout << "Adress of test char array pointer = " << test <<",\tsizeof = ";
        cout << sizeof(test) << "\ndereferense = " << *test;
    }
    typedef int* int_p_a[7];
    typedef int* (*int_p_a_p)[7];
    int_p_a test_int_p_a[7];
    int_p_a_p testint_p_a_p = new int_p_a[7];
    typedef int* pointer_a_a[8][7];
    return 0;
}

