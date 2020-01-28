# Standard Object and String implementations
This repository is for [CS4500 Software Development](http://janvitek.org/events/NEU/4500/s20/index.html) and provides standard implementations for the class for both Object and String. It would be mutually beneficial if the entire class adopted the same base APIs.

If you would like to contribute/make changes, all is welcome

## Design Decisions
- Both classes have no local variables defined. This way the implementing group can call their variables whatever they want.
- Object is relatively simple in comparison to given one on [Piazza @166](https://piazza.com/class/k51bluky59n2jr?cid=166). The reason behind this stems from [Piazza @330](https://piazza.com/class/k51bluky59n2jr?cid=330) stating that those older implementations were used more for learning. A simpler API will be easier for all groups to implement.


### Object
`Object()` - Basic constructor for an Object

`virtual ~Object()` - Basic virtual destructor for an Object, to be overridden by subclasses

`virtual bool equals(Object* obj)` - Equality checker between Objects

`virtual size_t hash()` - Generates a hash for an Object

### String
`String(char* s)` - Basic constructor for a String

`String(const char* s)` - Basic constructor for a String

`String(String* s)` - Creates a new String copying the value from s

`~String()` - Destructor for a String

`size_t hash()` - Generates a hash for a String

`bool equals(Object* obj)` - Equality checker between a String and an Object

`int cmp(String* s)` - Compares two Strings in alphabetical order
- `< 0 if this String is less than String s`
- `= 0 if this String is equal to String s`
- `> 0 if this String is greater than String s`

`String* concat(String* s)` - Concatenates two Strings, creates a new String

`size_t size()` - Gets the size of the String value