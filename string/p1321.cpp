/**
 * https://www.luogu.com.cn/problem/P1321
 *
 * @File:   p1321.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-20
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    string str;
    int b, g;
    std::size_t p;

    cin >> str;
    b = g = 0;
    p = 0;

    while (1)
    {
        p = str.find("boy", p);
        if (p == std::string::npos)
            break;
        b++;
        str[p++] = '.';
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("bo", p);
        if (p == string::npos)
            break;
        b++;
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("oy", p);
        if (p == string::npos)
            break;
        b++;
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("b", p);
        if (p == string::npos)
            break;
        b++;
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("o", p);
        if (p == string::npos)
            break;
        b++;
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("y", p);
        if (p == string::npos)
            break;
        b++;
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("girl", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
        str[p++] = '.';
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("gir", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("irl", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("gi", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("ir", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("rl", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("g", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("i", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("r", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
    }

    p = 0;
    while (1)
    {
        p = str.find("l", p);
        if (p == string::npos)
            break;
        g++;
        str[p++] = '.';
    }

    cout << b << '\n' << g << endl;
    return 0;
}
