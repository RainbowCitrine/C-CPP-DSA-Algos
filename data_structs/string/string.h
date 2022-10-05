//Description:
//Author: Armend Veseli

//Using unsigned ints can cause indexing problems/errors.

struct string {
    unsigned int length;
    char* buffer;
    length();
    string();
    string(const char* my_text);
};
