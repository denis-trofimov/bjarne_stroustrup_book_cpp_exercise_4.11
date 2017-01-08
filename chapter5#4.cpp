/*
 * chapter5#4.cpp
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
 *4. (*1) Напишите функцию, которая обменивает значения у двух целых чисел.
Используйте аргументы типа int*. Напишите другой вариант с аргументами
типа int&.
 */


#include <iostream>

using namespace std;

void swap_by_pointers(int* a, int* b)
{
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

void swap_by_reference(int& a, int& b)
{
    a^=b;
    b^=a;
    a^=b;
}

int main(int argc, char **argv)
{
    int x = 0xFF, y = 0x888;
    cout << "Before swap x = " << hex << x << ", y = " << y;
    int* p1 = &x, * p2 = &y;
    swap_by_pointers(p1, p2);
    cout << "\nUsing swap_by_pointers, x = " << hex << x << ", y = " << y;
    int& r1 = x, & r2 = y;
    swap_by_reference(r1, r2);
    cout << "\nUsing swap_by_reference, x = " << hex << x << ", y = " << y;

    return 0;
}

