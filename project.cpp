#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// problem 1
void makeLowercase(string &text)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = tolower(text[i]);
    }
}

// problem 2
void doubleNumber(int &num)
{
    num = num * 2;
}

// problem 3
int addRandom(int num)
{
    int r = rand() % 10 + 1;
    num = num + r;
    return num;
}

int main()
{
    srand(time(0));

    // problem 1
    string text;
    cout << "enter a word: ";
    getline(cin, text);

    makeLowercase(text);
    cout << "lowercase: " << text << endl;

    // problem 2
    int num;
    cout << "enter a number: ";
    cin >> num;

    doubleNumber(num);
    cout << "after x2: " << num << endl;

    // problem 3
    int number;
    cout << "enter another number: ";
    cin >> number;

    int newNumber = addRandom(number);

    cout << "original: " << number << endl;
    cout << "new: " << newNumber << endl;

    return 0;
}