// lang::CwC
#pragma once

#include <cstdlib>

/**
 * A class that represents the top of the object hierarchy.
 * author: chasebish
 */
class Object {
public:
  virtual ~Object(){};

  /**
   * Determine whether this Object is equal to the given Object.
   *
   * @arg o  the other Object
   * @return whether the other Object is extensionally equal to this
   */
  virtual bool equals(const Object *o) const = 0;

  /**
   * Generates a hash for this Object. Objects which are `equals` must have
   * identical hash values.
   *
   * @return this Object's hash value.
   */
  virtual size_t hash() const = 0;
};
