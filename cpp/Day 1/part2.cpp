/// Advent of Code 2025 - Day 1, part 2
#include <bits/stdc++.h>
using namespace std;

ifstream in("xyz.in");
ofstream out("xyz.out");

int main() {
    int counter = 50;
    int pass = 0;

    string s;
    while (in >> s) {
        bool right = (s[0] == 'R');
        int num = stoi(s.substr(1));

        for (int i = 0; i < num; i++) {
            if (right) {
                counter++;
                if (counter == 100) counter = 0;
            } else {
                counter--;
                if (counter == -1) counter = 99;
            }

            if (counter == 0) pass++;
        }
    }

    out << pass;
    return 0;
}
