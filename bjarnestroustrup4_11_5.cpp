/*5. (*2) Каковы на вашей машине минимальные и максимальные значения для
следующих типов: char, short, int, long, float, double, long double и unsigned?.
 * bjarnestroustrup4_11_5.cpp
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
 *std: :cout«"largest float== "«std: :numeric_limits<float> : :max ()
« " , char is signed == " << std: : numeric_limits<char> : :is_signed« ' \n ' ;
 */


#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Type char limits are from " << (short)numeric_limits<char>::min();
    cout << " to " << (short)numeric_limits<char>::max() << ".\n";
    cout << "Type short limits are from " << numeric_limits<short>::min();
    cout << " to " << numeric_limits<short>::max() << ".\n";
    cout << "Type int limits are from " << numeric_limits<int>::min();
    cout << " to " << numeric_limits<int>::max() << ".\n";
    cout << "Type long limits are from " << numeric_limits<long>::min();
    cout << " to " << numeric_limits<long>::max() << ".\n";
    cout << "Type float limits are from " << numeric_limits<float>::min();
    cout << " to " << numeric_limits<float>::max() << ".\n";
    cout << "Type double limits are from " << numeric_limits<double>::min();
    cout << " to " << numeric_limits<double>::max() << ".\n";
    cout << "Type unsigned limits are from " << numeric_limits<unsigned>::min();
    cout << " to " << numeric_limits<unsigned>::max() << ".\n";
    cout << "Type long double limits are from " << numeric_limits<long double>::min();
    cout << " to " << numeric_limits<long double>::max() << ".\n";
    return 0;
}

