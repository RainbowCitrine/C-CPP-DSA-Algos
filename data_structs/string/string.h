//Author: Armend Veseli
//Description: a string is a collection of characters.

//Using unsigned ints can cause indexing problems/errors.

struct string {
    unsigned int length;
    char* buffer;
    
    clear();
    length();
    size();
    string();
    string(const char* my_text);
    resize(const size_t new_size);
};
