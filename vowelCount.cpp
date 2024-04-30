#include "vowelCount.h"
#include <string>

int vowel_count(std::string usr_inp){
    int vowels = 0;
    for(int i=0; i < usr_inp.length(); i++){
        if(usr_inp[i] == 'a' || usr_inp[i] == 'e' || usr_inp[i] == 'i' || usr_inp[i] == 'o' || usr_inp[i] == 'u' || usr_inp[i] == 'A' || usr_inp[i] == 'E' || usr_inp[i] == 'I' || usr_inp[i] == 'O' || usr_inp[i] == 'U'){
            vowels += 1;
        }
    }
    return vowels;
}
