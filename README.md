# lua_module-simplecalc
A very simple lua_module calculator made with only 48 line of ANSI C code for learning purpose. The code demonstrating uses of typedef, struct, and simple string parsing in C programming and how to use Lua C API. calclua accept string expression in this format:
```
(number) (operator) (number)
```
calclua only support addition, multiplication, division and substraction. 

**Accuracy of this module is never tested and must never be used in serious work/production.**

# example
```
Lua 5.3.5  Copyright (C) 1994-2018 Lua.org, PUC-Rio
> require("calclua")
true
> calc("88+7")
95.0
> calc("90*5")
450.0
> calc("90h5")
wrong operator. simplecalc only support addition, multiplication, division and substraction
0.0
```

# compilation
Just compile the main source file ```calclua.c``` with your favorite C compiler, e.g ```gcc -L. -shared -fPIC -o calclua.so calclua.c -llua```

# license
MIT License

Copyright (c) 2018 Mohd Kholid Yaacob

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
