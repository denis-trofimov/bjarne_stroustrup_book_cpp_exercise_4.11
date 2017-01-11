/*
 * 5. (∗1.5) What is the size of the array str the following example:
 *  char str[] = "a short string";
 * What is the length of the string "a short string"?
 * chapter5#5.cpp
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
 *5. (*1.5) Каков размер массива str в следующем примере:
char str[] = "a short string" ;
Какова длина строки "a short string11?
 */


#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
    char str[] = "a short string";
    cout << "Size of \"a short string\" is " << sizeof(str) << "Bytes, but len"
    "gth is " << strlen(str) << " symbols.";
    return 0;
}

