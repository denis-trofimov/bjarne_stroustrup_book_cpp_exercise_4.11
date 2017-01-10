/*
 * chapter5#8.cpp
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
 *8. (*2) Выполните тестовые прогоны, чтобы на практике убедиться в
эквивалентности кода для случаев итерации по элементам массива с помощью
указателей и с помощью индексации (§5.3.1). Если у компилятора есть разные
степени оптимизации, убедитесь, влияет ли это (и как) на качество
генерируемого машинного кода.
 */


#include <iostream>

using namespace std;

unsigned fi(char v[])
{
    unsigned count = 0;
    for(int i = 0; v[i]!=0; i++)
    {
        if(v[i]=='A') ++count;
    }
    return count;
}

unsigned fp(char v[])
{
    unsigned count = 0;
    for(char* p = v; *p!=0; p++)
    {
        if(*p=='A') ++count;
    }
    return count;
}

int main(int argc, char **argv)
{
    char s[65401];
    for(int c = 0; c<65400; ++c)
    {
        s[c] = 'A';
    }
    clock_t ts = clock();
    unsigned result_fi = fi(s);
    clock_t tfi = clock();
    unsigned result_fp = fp(s);
    clock_t tfp = clock();
    cout << "result_fi = " << result_fi << ", result_fp = " << result_fp << '\n';
    cout << "Index way of reading csting took "
    << double(tfi-ts)/CLOCKS_PER_SEC << "seconds \n"
    << " (measurement granularity: " << CLOCKS_PER_SEC << " of a second);\n";
    cout << "pointer way of reading csting took "
    << double(tfp-tfi)/CLOCKS_PER_SEC << "seconds.\n";
    return 0;
}

