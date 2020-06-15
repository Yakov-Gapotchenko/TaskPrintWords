#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {


    string s = "scott tiger mushroom";
    getline(cin, s, '.');




    string delimiter = " ";
    vector<string> vectorOfWords;



    //   create vector of words

    cout << "create vector of words:   "<< endl;

    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);

        // pass all ' '
        int i = 0;
        while(s[pos + i]==' ' ){
            i++;
        }

        vectorOfWords.push_back(token);
        cout << vectorOfWords.back() << endl;
        s.erase(0, pos + i);
    }

    vectorOfWords.push_back(s);
    cout << vectorOfWords.back() << endl;


    // find max length of the word
    int maxLen = 0;
    for ( string word : vectorOfWords) {
        if (word.length() > maxLen)
            maxLen = word.length();
    }

    // output
    cout<< " maxLen:   "<< maxLen << endl;

    for( string word : vectorOfWords){
        if (word.length() == maxLen)
            cout << word << endl;
    }



//i don't know how it works   but it works    welll.




    return 0;
}
