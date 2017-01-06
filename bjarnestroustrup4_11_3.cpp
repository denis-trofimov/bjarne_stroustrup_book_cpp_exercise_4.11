/*3. (*1.5) Напишите программу, которая выводит размеры фундаментальных
типов, нескольких типов указателей и нескольких перечислений по вашему
выбору. Используйте операцию sizeof.
 * bjarnestroustrup4_11.cpp
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
#include <math.h>
using namespace std;

int main ()
{

    enum Beer {Carlsberg, Tuborg, Thor};
    Beer my_beer = Carlsberg;
    enum e3 {min = -10, max = 1000000}; //диапазон -1048576:1048575

    cout << "sizeof(int) = " << sizeof(int) << "\n";
    cout << "sizeof(char) = " << sizeof(char) << "\n";
    cout << "sizeof(short) = " << sizeof(short) << "\n";
    cout << "sizeof(long) = " << sizeof(long) << "\n";
    cout << "sizeof(float) = " << sizeof(float) << "\n";
    cout << "sizeof(double) = " << sizeof(double) << "\n";
    cout << "sizeof(Beer{Carlsberg, Tuborg, Thor};) = " << sizeof(Beer) << "\n";
    cout << "sizeof(my_beer) = " << sizeof(my_beer) << "\n";
    cout << "sizeof(e3 {min = -10, max = 1000000};) = " << sizeof(e3) << "\n";
    cout << "sizeof(int*) = " << sizeof(int*) << "\n";
    cout << "sizeof(char*) = " << sizeof(char*) << "\n";
    cout << "sizeof(short*) = " << sizeof(short*) << "\n";

    cout << "sizeof(float*) = " << sizeof(float*) << "\n";
    cout << "sizeof(double*) = " << sizeof(double*) << "\n";
}
/*
 * sizeof(int) = 4
sizeof(char) = 1
sizeof(short) = 2
sizeof(long) = 4
sizeof(float) = 4
sizeof(double) = 8
sizeof(Beer{Carlsberg, Tuborg, Thor};) = 4
sizeof(e3 {min = -10, max = 1000000};) = 4
sizeof(int*) = 4
sizeof(char*) = 4
sizeof(short*) = 4
sizeof(float*) = 4
sizeof(double*) = 4
 */
