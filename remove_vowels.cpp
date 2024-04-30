#include "remove_vowels.h"
#include <string>


std::string remove_vowels(std::string usr_inp){
    std::string out_str = "";
    for(int i=0; i < usr_inp.length(); i++){
        if(usr_inp[i] != 'a' && usr_inp[i] != 'e' && usr_inp[i] != 'i' && usr_inp[i] != 'o' && usr_inp[i] != 'u' && usr_inp[i] != 'A' && usr_inp[i] != 'E' && usr_inp[i] != 'I' && usr_inp[i] != 'O' && usr_inp[i] != 'U'){
            out_str += usr_inp[i];
        }
    }
    return out_str;
}
