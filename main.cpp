//
// Created by adbrei on 4/10/2020.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    string poem[22] = {"twinkle", "twinkle", "little", "bat",
                        "how", "i", "wonder", "what", "you're", "at",
                        "up", "above", "the", "world", "you", "fly",
                        "like", "a", "teatray", "in", "the", "sky"};

    vector<char> encodedMsg = {'s', 't', 't', 'i', 'a', 'l', 'm', 'h'};

    // Print out msg
    cout << endl << "POEM CODE" << endl;
    cout << "------------------------------------" << endl << "Encrypted message: ";
    for (char c: encodedMsg) {
        cout << c << " ";
    } cout << endl << "------------------------------------" << endl;


    // Determine indicator word
    vector<char> indicatorWord;     // indicator is first char of msg
    for (char x : poem[encodedMsg.at(0) - 97]) {     // get indicator word from poem using 1st letter of msg
        indicatorWord.push_back(x);
    }
    encodedMsg.erase(encodedMsg.begin());   // remove indicator char from msg


    // Decrypt message
    vector<char> decodedMsg(indicatorWord.size());
    for (int j = 0; j < indicatorWord.size(); j++) {
        char minChar = indicatorWord[0];
        for (char x : indicatorWord) {  // find minimum char
            if (x < minChar) minChar = x;
        }

        for (int i = 0; i < indicatorWord.size(); i++) {
            if (indicatorWord[i] == minChar) {
                decodedMsg.at(i) = encodedMsg.at(j);
                indicatorWord.at(i) = '{';  // '{' > lowercase alphabet
                break;  // Get out of loop before duplicate value are located
            }
        }
    }

    // Print out the decoded message!
    cout << "Decrypted message: ";
    for (char c : decodedMsg) cout << c << " ";
    cout << endl << "------------------------------------" << endl;

    return 0;
}
