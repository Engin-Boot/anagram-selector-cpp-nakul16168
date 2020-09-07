#include "anagram.h"

bool isLengthEqual(string word1 , string word2){
    if(word1.length() != word2.length()){
        cout << "Unequal Length" <<  endl ;
        return false ;
    else{
        return true ;
    }
}
    
string removeSpaces(string word){
    string wordWithoutSpaces ;

    for(int i = 0 ; i < word.length() ; i ++){
        if(word[i] != ' '){
            wordWithoutSpaces += word[i] ;
        }
    }
    return wordWithoutSpaces ;
}



bool checkWords(string word1 , string word2){

    if(word1.length() != word2.length()){
        cout << "Unequal Length" <<  endl ;
        return false ;
    }
    else{
        cout << "Equal Length" <<  endl ;
        for(int i = 0 ; i < word1.length() ; i ++){
            if(word1[i] != word2[i]){
                return false ;
            }
        }
        return true ;
    }
}


bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    //Fill the correct implementation here
    return false;
}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    //Fill the correct implementation here
    return candidates;
}
