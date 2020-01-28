//lang::CwC
#pragma once

#include "object.h"
#include <cstdlib>
#include <cstring>
#include <cstdio> 

/**
 * An immutable String class representing a char*
 * author: chasebish */
class String : public Object {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Creates a String copying s */
  String(char* s);

  /* Creates a String copying s */
  String(const char* s);

  /* Copies a String copying the value from s */
  String(String* s);

  /* Clears String from memory */
  ~String();


  /** INHERITED METHODS **/

  /* Inherited from Object, generates a hash for a String */
  size_t hash();

  /* Inherited from Object, checks equality between an String and an Object */
  bool equals(Object* obj);


  /** STRING METHODS **/
  
  /* Compares strings based on alphabetical order */
  int cmp(String* s);

  /* Creates a new String by combining two existing Strings */
  String* concat(String* s);

  /* Returns the current length of the String */
  size_t size();
};
