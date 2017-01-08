/*
 * chapter5#6.cpp
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
 *6. (*1) Определите функции fichar), g(charsc) и h{const charsc). Вызовите их
с аргументами ! а!, 49, 3300, с, ис и sc, где с — это char, uc — unsigned char,
sc — signed char. Какие из этих вызовов допустимы? В каких вызовах
компилятор создаст временные переменные?
 */


#include <iostream>

using namespace std;

void f(char s)
{
    cout << "called f(" << s << ")\t integer value = " << (int)s << '\n';
}

void g (char& s)
{
    cout << "called g(" << s << ")\t integer value = " << (int)s << '\n';
}

void h (const char& s)
{
    cout << "called h(" << s << ")\t integer value = " << (int)s << '\n';
}
int main(int argc, char **argv)
{
    unsigned char uc = 0x79;
    signed char sc = -127;
    char c = 'Z';

    f('a');
    f(49);
    f(3300);
    f(c);
    f(uc);
    f(sc);

    //g('a');
    //g(49);
    //g(3300);
    g(c);
    //g(uc);
    //g(sc);

    h('a');
    h(49);
    h(3300);
    h(c);
    h(uc);
    h(sc);
    return 0;
}
/*
g++ -Wall -c "chapter5#6.cpp"
chapter5#6.cpp: In function ‘int main(int, char**)’:
chapter5#6.cpp:54:11: warning: overflow in implicit constant conversion [-Woverflow]
     f(3300);
           ^
chapter5#6.cpp:59:10: error: invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘char’
     g('a');
          ^
chapter5#6.cpp:37:6: note: in passing argument 1 of ‘void g(char&)’
 void g (char& s)
      ^
chapter5#6.cpp:60:9: error: invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘int’
     g(49);
         ^
chapter5#6.cpp:37:6: note: in passing argument 1 of ‘void g(char&)’
 void g (char& s)
      ^
chapter5#6.cpp:61:11: error: invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘int’
     g(3300);
           ^
chapter5#6.cpp:37:6: note: in passing argument 1 of ‘void g(char&)’
 void g (char& s)
      ^
chapter5#6.cpp:63:9: error: invalid initialization of reference of type ‘char&’ from expression of type ‘unsigned char’
     g(uc);
         ^
chapter5#6.cpp:37:6: note: in passing argument 1 of ‘void g(char&)’
 void g (char& s)
      ^
chapter5#6.cpp:64:9: error: invalid initialization of reference of type ‘char&’ from expression of type ‘signed char’
     g(sc);
         ^
chapter5#6.cpp:37:6: note: in passing argument 1 of ‘void g(char&)’
 void g (char& s)
      ^
chapter5#6.cpp:68:11: warning: overflow in implicit constant conversion [-Woverflow]
     h(3300);
           ^

*/
