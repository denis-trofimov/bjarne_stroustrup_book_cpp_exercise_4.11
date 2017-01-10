/*
 * chapter5#11.cpp
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
 *11. (*2) Читайте последовательность слов из потока ввода. Пусть слово Quit
служит признаком конца ввода. Печатайте слова в порядке, в каком они были
введены, но не допускайте повтора одинаковых слов. Модифицируйте
программу так, чтобы перед печатью слова предварительно сортировались.
 */


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

enum Token
{
    WORD, QUIT, END
};
//struct WordToken
//{
    //Token code = END;
    //string word = 0;
//};
//Token curr_token;
//wstring word;
//

//extern wistream cin;

Token get_token(string& word)
{
    char ch=0;
    do
    {
        if(!cin.get(ch))
        {
            return END;
        }
    }
    while(!isalnum(ch));

    //in ch got first alphanumeric character
    do
    {
        word.push_back(ch);
    }
    while(cin.get(ch) && isalnum(ch));

    //whether cin.get(ch)==0 or ch is a non-alphanumeric character
    if(word!="Quit")
    {
        return WORD;
    }
    else
    {
        return QUIT;
    }
}

void print_token(const string& s)
{
    cout << s << ' ';
}

void print_words(const vector<string>& vw)
{
    for_each(vw.begin(), vw.end(), print_token);
}

int main(int argc, char **argv)
{
    vector<string> unique_words;
    string word="";
    while(get_token(word)==WORD)
    {
        //search for same string in unique_words
        if(find(unique_words.begin(), unique_words.end(), word) == unique_words.end())
        {
            unique_words.push_back(word);
        }
        word="";
    }
    //*sort
    sort(unique_words.begin(), unique_words.end());
    print_words(unique_words);

    return 0;
}

