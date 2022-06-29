# Cpp-STL

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. A working knowledge of template classes is a prerequisite for working with STL.

### STL has four components

* Algorithms
* Containers
* Functions
* Iterators

#### Algorithms

The header algorithm defines a collection of functions especially designed to be used on ranges of elements.They act on containers and provide means for various operations for the contents of the containers.

* Algorithm
  * Sorting
  * Searching
  * Important STL Algorithms
  * Useful Array algorithms
  * Partition Operations

* Numeric
  * valarray class

#### Containers

Containers or container classes store objects and data. There are in total seven standard “first-class” container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.

* Sequence Containers: implement data structures which can be accessed in a sequential manner.
  * vector
  * list
  * deque
  * arrays
  * forward_list( Introduced in C++11)

* Container Adaptors : provide a different interface for sequential containers.
  * queue
  * priority_queue
  * stack

* Associative Containers : implement sorted data structures that can be quickly searched (O(log n) complexity).
  * set
  * multiset
  * map
  * multimap

* Unordered Associative Containers : implement unordered data structures that can be quickly searched
  * unordered_set (Introduced in C++11)
  * unordered_multiset (Introduced in C++11)
  * unordered_map (Introduced in C++11)
  * unordered_multimap (Introduced in C++11)

#### Functions

The STL includes classes that overload the function call operator. Instances of such classes are called function objects or functors. Functors allow the working of the associated function to be customized with the help of parameters to be passed.

* Functors


#### Iterators

As the name suggests, iterators are used for working upon a sequence of values. They are the major feature that allow generality in STL.

* Iterators


#### Utility Library

Defined in header <utility>.

* pair
