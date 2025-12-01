/// Advent of Code 2025 - Day 1, part 1
#include <bits/stdc++.h>
using namespace std;

ifstream in("xyz.in");
ofstream out("xyz.out");

int main() {
    int counter = 50;
    int pass = 0;
    string s;
    while (in >> s) {
        bool add = (s[0] == 'R');
        int num = stoi(s.substr(1));

        counter += (add ? num : -num);

        counter = ((counter % 100) + 100) % 100;
        if (counter == 0) ++pass;
    }
    out << pass << '\n';
    return 0;
}
