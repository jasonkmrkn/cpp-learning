# OBJECT ORIENTED PROGRAMMING
### What is object-oriented programming? 
-->``is based on the concept of classes and objects.``
![img.png](img.png)

>struct and class is almost identical in cpp. But structs are usually used for 
**smaller things/data**. For example, coordinates that have x and y-axis. Classes are usually
for **much larger things**.
---
### Other OOP Concepts

1. Encapsulation
2. Abstraction
3. Polymorphism
4. Inheritance 
5. etc.

---
## Struct & Class Concept
In cpp, structs and class will do the same thing. Both of them will create an
object. People usually choose to use structs for smaller structures and classes 
for larger structures.

####So, what are the difference between a class and a struct?
> It has to do with access modifiers. When we create a struct or a class, the things
> inside of it are known as its members. These members will have access modifiers which is,
- private :  when we create an object of the class, the private members of its object won't be accessible outside the class definition. 
- public   : When we create an object of the class, we can access the public members of the object.
- protected (will come out when we learn inheritance)

> By default, struct members are public. On the other hand, class members by default are private.
> We can change the access modifiers for the members, but we need to specify that by using ```private:``` or vice versa. 
> The other characteristic of class and struct are, 
- pass by value
- can contain methods and data member
- can use inheritance 
> structs inside cpp, used to contain data members meaning **variables**. Simply we use structs to store data.
```cpp
struct coordinate{
    int x;
    int y;
};
```

---
### Classes & Objects 
What is a class? 
>A class defines the structure or the shape of some data. Or more 
simply, when we build a class it's like we're building our own "type", such as 
**int**, **std::string**, etc. We can treat our own "type" like any other types.
And our "type" functionality is defined by the class.
> ![img_1.png](img_1.png)

