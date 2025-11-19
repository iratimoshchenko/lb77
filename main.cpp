#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<char> s;
    string str, reversed = "";
    bool pal = true;

    cout << "Введіть слово: ";
    getline(cin, str);

    for (char c : str) {
        s.push(c);
    }

    while (!s.empty()) {
        char letter = s.top();
        s.pop();

        reversed += letter;
    }
    if (str == reversed)
    cout << "Рядок є паліндромом";
    else
    cout << "Рядок не є паліндромом";
    
        return 0;
}