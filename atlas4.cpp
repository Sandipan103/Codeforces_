#include <bits/stdc++.h>
using namespace std;


vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream tokenStream(str); 
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int minRemovalsToMatch(const string& word, const string& dictWord) {
    int i = 0, j = 0;
    
    while (i < word.size() && j < dictWord.size()) {
        if (word[i] == dictWord[j]) {
            j++;  
        }
        i++;  
    }
    
    if (j == dictWord.size()) {
        return word.size() - dictWord.size();  
    }
    return -1;  
}

string ArrayChallenge(string strArr[]) {
    string word = strArr[0];  
    string dictionary = strArr[1];  

    
    vector<string> dictWords = split(dictionary, ',');
    
    int minRemovals = -1;  
    
    
    for (const string& dictWord : dictWords) {
        
        string trimmedDictWord = dictWord;
        trimmedDictWord.erase(trimmedDictWord.begin(), find_if(trimmedDictWord.begin(), trimmedDictWord.end(), [](unsigned char ch) {
            return !isspace(ch);
        }));
        trimmedDictWord.erase(find_if(trimmedDictWord.rbegin(), trimmedDictWord.rend(), [](unsigned char ch) {
            return !isspace(ch);
        }).base(), trimmedDictWord.end());

        int removals = minRemovalsToMatch(word, trimmedDictWord);
        if (removals != -1) {
            if (minRemovals == -1 || removals < minRemovals) {
                minRemovals = removals;  
            }
        }
    }
    
    
    return (minRemovals == -1) ? "-1" : to_string(minRemovals);
}

int main() {
    
    // take input here 
    string strArr1[] = {"baseball", "a,all,b,ball,bas,base,cat,code,d,e,quit,r"};
 cout << ArrayChallenge(strArr1) << endl;
    
    string strArr[] = {"apbpleeeef", "o, ab, abc, abcg, b,c, dog, e, efd, zzzz"};
    cout << ArrayChallenge(strArr) << endl;  
    
    return 0;
}





// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to determine the winner of the Nim game
// int GameChallenge(vector<int>& piles) {
//     int nimSum = 0;

//     // XOR all pile sizes
//     for (int pile : piles) {
//         nimSum ^= pile;
//     }

//     // If the nimSum is 0, player 2 wins, else player 1 wins
//     return (nimSum == 0) ? 2 : 1;
// }

// int main() {
//     // Example input 1
//     vector<int> piles1 = {1, 2, 3};
//     cout << GameChallenge(piles1) << endl;  // Output: 2

//     // Example input 2
//     vector<int> piles2 = {1, 1, 1, 4, 5, 4};
//     cout << GameChallenge(piles2) << endl;  // Output: 1

//     return 0;
// }