#include <cstdlib>
#include "string.h"

string::length() 
{
  return sizeof(this->buffer) / sizeof(char);
}

string::size()
{
  return sizeof(this->buffer);
}

string::string() 
{
  this->length = 0;
  this->buffer = "";
}

string::string(const char* my_text) 
{
  this->buffer = my_text;
  this->length = this->length();
}

string::clear() 
{
  this->length = 0;
  this->buffer = "";
}

string::resize(const size_t new_size)
{
  this->length = new_size;
  this->buffer = (char*) realloc(sizeof(char) * new_size);
}
