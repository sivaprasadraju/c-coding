#include "string_length.h"
#include <string>

int str_len(std::string usr_inp){
    int length = 0;
    for(int i=0; usr_inp[i] != '\0'; i++){
        length += 1;
    }
    return length;
}
