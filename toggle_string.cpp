#include "toggle_string.h"
#include <string>

std::string toggle(std::string usr_inp){
for (int i=0; usr_inp[i]!='\0'; i++){
    if(islower(usr_inp[i])){
        usr_inp[i] = toupper(usr_inp[i]);
    }
    else if(isupper(usr_inp[i])){
        usr_inp[i] = tolower(usr_inp[i]);
    }
}
return usr_inp;
}

