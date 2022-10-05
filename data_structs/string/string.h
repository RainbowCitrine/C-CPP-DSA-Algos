//Author: Armend Veseli
//Description: a string is a collection of characters.

//Using unsigned ints can cause indexing problems/errors.

struct string {
    unsigned int length;
    char* buffer;
    length();
    string();
    string(const char* my_text);
    clear();
};
