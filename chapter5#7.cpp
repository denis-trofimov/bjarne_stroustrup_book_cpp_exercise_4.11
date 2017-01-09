/*
 * chapter5#7.cpp
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
 *7. (*1.5) Определите таблицу имен месяцев и количества дней в них. Выведите
эту таблицу. Проделайте это дважды: первый раз воспользуйтесь массивом
элементов типа char для названия месяца и массивом типа int для количества
дней; второй раз примените массив структур, которые содержат и названия
месяцев, и число дней.
 */


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
    //cstring array of char pointers
    const char* month_name[] = {"January", "February", "March", "April", "May", ""
    "June", "July", "August", "September", "October", "November", "December"};
    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "|===================|\n|Month    |Days     |\n|---------|--------"
    "-|\n";
    for(int i=0; i<12; ++i)
    {
        printf("|%-9s|%9i|\n", month_name[i], month_days[i]);
    }
    cout << "|===================|\n";

    //struct way
    struct month
    {
        char* name;
        char days;
    };
    month months[12];

    cout << "\n\n|===================|\n|Month    |Days     |\n|---------|----"
    "-----|\n";
    for(int i=0; i<12; ++i)
    {
        //init
        months[i].name = (char*)(month_name[i]);
        months[i].days = month_days[i];
        //print. %-9s is left aligned space dashed 9 symbol cstring
        //%9i is right aligned space dashed 9 symbol int
        printf("|%-9s|%9i|\n", months[i].name, months[i].days);
    }
    cout << "|===================|\n";
    return 0;
}

