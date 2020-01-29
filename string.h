// lang::CwC
#pragma once

#include "object.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

/**
 * A String class representing a char[]
 * author: chasebish
 */
class String : public Object {
public:
  /**
   * Creates a String by copying a string literal.
   *
   * @arg s string literal to be used as a source for this String object
   */
  String(const char *s);

  /**
   * Copy constructor.
   *
   * @arg s source String object to be copied from
   */
  String(const String *s);

  ~String();

  /**
   * Inherits the following from parent Object:
   *
   * bool equals(const Object *o) const;
   * size_t hash() const;
   */

  /**
   * Compares strings based on alphabetical order according to the following
   * ruleset:
   *   < 0 -> this String is less than String s
   *   = 0 -> this String is equal to String s
   *   > 0 -> this String is greater than String s
   *
   * @arg s  the String to compare this against
   * @return an int resulting from applying the above rules
   */
  int cmp(const String *s) const;

  /**
   * Concatenates the given String onto this String.
   *
   * @arg s  the source String to be concatenated onto this String
   * @effect mutates this
   */
  void concat(const String *s);

  /**
   * Concatenates the given String onto this String, storing the result in
   * dest.
   *
   * @arg s    the source string to be concatenated onto this
   * @arg dest the destination for the string resulting from this concatenation
   */
  void concat(const String *s, String *dest) const;

  /**
   * Get the length of this String
   *
   * @return the length of this String
   */
  int length() const;
};
