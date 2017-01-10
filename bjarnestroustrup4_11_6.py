#!/usr/bin/env python2.6
# -*- coding: utf-8 -*-
#
#  bjarnestroustrup4_11_6.py
#  Usage: in cli $ python bjarnestroustrup4_11_6.py 1048576 > bjarnestroustrup4_11_6.cpp

#  Copyright 2017 answered Apr 21 '10 at 10:32 Michael Aaron Safyan
#  http://stackoverflow.com/users/136540/michael-aaron-safyan
#
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#
#
import sys;
cppcode="""
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
     int %s = 0;
     return 0;
}
"""

def longvarname(n):
    str="x";
    for i in xrange(n):
        str = str+"0";
    return str;

def printcpp(n):
    print cppcode % longvarname(n);

if __name__=="__main__":
    if len(sys.argv)==2:
        printcpp(int(sys.argv[1]));


def main():

    return 0

if __name__ == '__main__':
    main()
