#include <iostream>
#include <string>

using namespace std;
string sjat(string input) {
    string news;

    bool isprobel = true;

    for (auto& i : input) {
        if (i == ' ') {
            isprobel = true;
        }
        else {
            if (isprobel) {
                news += ' ';
            }
            news += i;
            isprobel = false;
        }
    }

    return news;
}

int main() {
    string s;
    getline(cin, s);
    string compressedText = sjat(s);
    cout << compressedText << endl;

}