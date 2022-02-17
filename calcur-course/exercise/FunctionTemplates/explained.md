When you create a function you've to determined what types you're going to accept
as arguments. So you're going to make parameters on the function definition or declaration.
If you want to accept different types, then you need to make an overload function.
But, the problem is, you need to make multiple version of the function.

Function Templates --> A function that didn't specify the type of the parameter and more generic.
from this,
```cpp
void swap(int &x, int &y);
```
to this,

```cpp
template<typename T>
void swap(T &x, T &y){
    T test = 1;
}
```
`"T"` is used as if it was a string/int/etc. "T" isn't an actual defined type.
