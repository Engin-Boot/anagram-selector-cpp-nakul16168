#include "anagram.h"
#include<bits/stdc++.h>

bool isLengthEqual(string word1 , string word2){
    if(word1.length() != word2.length()){
        cout << "Unequal Length" <<  endl ;
        return false ;
    }
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


string removeLowerCase_and_Sort(string word){
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    sort(word.begin(), word.end()) ;
    return word ;

}



bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {
    
    word1 = removeSpaces(word1) ;
    word1 = removeLowerCase_and_Sort(word1);
    word2 = removeSpaces(word2) ;
    word2 = removeLowerCase_and_Sort(word2);

    if(!isLengthEqual(word1 , word2)){
        return false ;
    }
    else{
        for(int i = 0 ; i < word1.length() ; i ++){
            if(word1[i] != word2[i]){
                return false ;
            }
        }
        return true ;
    }
    
}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    //Fill the correct implementation here
    
    vector<string> selection;
    for(int i = 0 ; i < candidates.size();i++){
        if (WordPairIsAnagram(word, candidates[i]))
            selection.push_back(candidates[i]);
    }
    return selection;
}
