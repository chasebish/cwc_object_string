//lang::CwC
#pragma once

#include <cstdlib>

/**
 * A class that represents the top of the object hierarchy.
 * author: chasebish */
class Object {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Default Object constructor */
  Object();

  /* Default Object destructor, to be overriden by subclasses */
  virtual ~Object();


  /** VIRTUAL METHODS **/

  /* Returns whether two objects are equal, to be overriden by subclasses */
  virtual bool equals(Object* const obj);

  /* Returns an object's hash value. Identical objects should have identical
   * hashes */
  virtual size_t hash();

  /* Returns a copy of this object. The copy is owned by the caller and they are
   * responsible for freeing its memory. */
  virtual Object* clone();
};
