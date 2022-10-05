#include "string.h"

string::length() {
  return sizeof(this->buffer) / sizeof(char);
}

string::string() {
  this->length = 0;
  this->buffer = "";
}

string::string(const char* my_text) {
  this->buffer = my_text;
  this->length = this->length();
}
