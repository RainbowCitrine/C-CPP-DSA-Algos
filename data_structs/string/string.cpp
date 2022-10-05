#include "string.h"

string::length() {
  return sizeof(this->buffer) / sizeof(char);
}

string::string() {
  this->length = 0;
  this->buffer = "";
}
