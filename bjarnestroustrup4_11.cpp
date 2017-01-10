/*
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


template<class T> T abs(T a) {return a<0 ? -a : a;}
namespace NS { int a; }
struct Date;
struct Date {int d, m, y;};
int day(Date* p) {return p->d;}
double sqrt1(double);
double sqrt1(double a) {
    return sqrt(a);
}

int main ()
{
    //1
    std::cout << "Hello, world!\n";

    //2. (*1) Для каждого объявления из §4.9 выполните следующее: если объявление
    //не является определением, переделайте его в определение; если же
    //объявление является определением, напишите для него соответствующее
    //объявление, не являющееся одновременно и определением.
    char ch = 'I';
    string s = "С Рождеством Христовым";
    int count;
    count = (int) ch;
    const double pi = 3.1415926535897932385;
    //extern int error_number;
    //error_number = 0;
    const char* name;
    name = "Njal";
    const char* season [] = { "spring", "summer" , "fall", "winter"};
    //typedef complex<short> Point;
    struct User;
    struct User
    {
        char sex;
        string fullname;
    };
    enum Beer {Carlsberg, Tuborg, Thor};
    Beer choose = Carlsberg;
}
