
// For POD class members, it makes no difference, it's just a matter of style. For class members which are classes, then it avoids an unnecessary call to a default constructor. Consider:

class A
{
public:
    A() { x = 0; }
    A(int x_) { x = x_; }
    int x;
};

class B
{
public:
    B()
    {
        a.x = 3;
    }
private:
    A a;
};

// In this case, the constructor for B will call the default constructor for A, and then initialize a.x to 3. A better way would be for B's constructor to directly call A's constructor in the initializer list:

B()
  : a(3)
{
}

// This would only call A's A(int) constructor and not its default constructor. In this example, the difference is negligible, but imagine if you will that A's default constructor did more, such as allocating memory or opening files. You wouldn't want to do that unnecessarily.

// Furthermore, if a class doesn't have a default constructor, or you have a const member variable, you must use an initialize list:

class A
{
public:
    A(int x_) { x = x_; }
    int x;
}

class B
{
public:
    B() : a(3), y(2)  // 'a' and 'y' MUST be initialized in an initializer list;
    {                 // it is an error not to do so
    }
private:
    A a;
    const int y;
};



// ===================================================================================================



// Next to the performance issues, there is another one very important which I'd call code maintainability and extendibility.

// If a T is POD and you start preferring initialization list, then if one time T will change to a non-POD type,
// you won't need to change anything around initialization to avoid unnecessary constructor calls because it is already optimised.

// If type T does have default constructor and one or more user-defined constructors and one time you decide to remove or
// hide the default one, then if initialization list was used, you don't need to update code if your user-defined
// constructors because they are already correctly implemented.

// Same with const members or reference members, let's say initially T is defined as follows:

struct T
{
    T() { a = 5; }
private:
    int a;
};

// Next, you decide to qualify a as const, if you would use initialization list from the beginning,
// then this was a single line change, but having the T defined as above, it also requires to dig the constructor definition to remove assignment:

struct T
{
    T() : a(5) {} // 2. that requires changes here too
private:
    const int a; // 1. one line change
};

// It's not a secret that maintenance is far easier and less error-prone if code was written not by a "code monkey"
// but by an engineer who makes decisions based on deeper consideration about what he is doing.


// ===================================================================================================

struct S {
    int n;
    S(int); // constructor declaration
    S() : n(7) {} // constructor definition.
                  // ": n(7)" is the initializer list
                  // ": n(7) {}" is the function body
};
S::S(int x) : n{x} {} // constructor definition. ": n{x}" is the initializer list
int main()
{
    S s; // calls S::S()
    S s2(10); // calls S::S(int)
}
