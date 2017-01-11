/*
 * 10. (∗1) Define an array of strings in which the strings contain the names
 *  of the months. Print those strings.
 * Pass the array to a function that prints those strings.
 * chapter5#10.cpp
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
10. (*1) Определите массив строк, содержащих названия месяцев. Распечатайте
эти строки. Для печати передайте этот массив в функцию.
 */


#include <iostream>
#include <cstdio>


using namespace std;

int print_months(const string* m, const int* d)
{
    cout << "|===================|\n|Month    |Days     |\n|---------|--------"
    "-|\n";
    for(int i=0; i<12; ++i)
    {
        printf("|%-9s|%9i|\n", m[i].c_str(), d[i]);
    }
    cout << "|===================|\n";
    return 0;
}

int print_months(const char** m, const int* d)
{
    cout << "|===================|\n|Month    |Days     |\n|---------|--------"
    "-|\n";
    for(int i=0; i<12; ++i)
    {
        printf("|%-9s|%9i|\n", m[i], d[i]);
    }
    cout << "|===================|\n";
    return 0;
}

int main(int argc, char **argv)
{
    //string way
    string month_name[] = {"January", "February", "March", "April", "May", ""
    "June", "July", "August", "September", "October", "November", "December"};
    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    print_months(month_name, month_days);

    //cstring way
    const char* month_names_c[] = {"January", "February", "March", "April",
    "May", "June", "July", "August", "September", "October", "November",
    "December"};
    return print_months(month_names_c, month_days);
}

