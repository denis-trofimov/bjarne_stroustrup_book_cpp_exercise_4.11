/*4. (*1.5) Напишите программу, которая выводит буквы 'a' - 'z' и цифры
' 0' — '9' и их десятичные коды. Повторите все для иных символов,
имеющих зрительные образы. Выведите числовые коды в шестнадцатеричном
виде.
 * bjarnestroustrup4_11_4.cpp
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
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
    unsigned char az = 'a';
    cout << "Letters a-a:\n";
    do
    {
        cout << "the value of '" << az << "' = " << int(az) << '\t';
        if (!(int(az)%2)) cout << '\n';
        ++az;
    }
    while (az <= 'z');

    cout << "\nLetters A-Z:\n";
    for (unsigned char AZ = 'A'; AZ <= 'Z'; ++AZ)
    {
        cout << "the value of '" << AZ << "' = ";
        short val = short(AZ);
        cout << val << '\t';
        if (!(val%2)) cout << '\n';
    }
    cout << "\nDigits 0-9:\n";

    for (unsigned char AZ = '0'; AZ <= '9'; ++AZ)
    {
        cout << "the value of '" << AZ << "' = ";
        short val = short(AZ);
        cout << val << '\t';
        if (!(val%2)) cout << '\n';
    }

    cout << "\n\nHex codes of symbols 0-255:\n";
    for (unsigned short val = 0x20; val <= 0x7e; ++val)
    {
        cout << "hex code of '" << (unsigned char)val << "' = ";
        printf("%x", val);
        cout << '\t';
        if (!(val%2)) cout << '\n';
    }
    return 0;
}

