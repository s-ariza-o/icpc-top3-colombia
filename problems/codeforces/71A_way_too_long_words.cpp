#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        if (word.size() > 10) {
            cout << word.front()
                 << word.size() - 2
                 << word.back()
                 << '\n';
        } else {
            cout << word << '\n';
        }
    }

    return 0;
}