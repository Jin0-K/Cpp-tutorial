#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    cout << phrase.length();
    cout << phrase[2] << endl;

    phrase[0] = 'B';
    cout << phrase << endl;
    cout << phrase.find("Academy", 0) << endl; // 'Academy' starts at index 8
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub << endl;

    return 0;
}