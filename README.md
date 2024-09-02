# Experiment-11

## Aim :
To study and implement Classes and Objects

## Software :
Vs code

## Theory :
### Classes :
A class is a user-defined data type with its own data members and member functions, which can be accessed and used by creating an instance of that class.<br>A C++ class is like a blueprint for an object.
It defines a data structure by combining data (attributes) and methods (functions) that operate on the data. A class is defined using the class keyword followed by the class name and a block of code that includes its attributes and methods

**For Example:** Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

- A Class is a user-defined data type that has data members and member functions.<br>
- Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behavior of the objects in a Class.<br>
- In the above example of class Car, the data member will be speed limit, mileage, etc, and member functions can be applying brakes, increasing speed, etc.

### Objects :
An object is created from a class. We have already made the class named MyClass, so now we can use this to create objects.<br>
An instance of a class. It represents a specific realization of the class, holding actual values for the attributes defined by the class. An object is created by instantiating the class. This involves calling the class as if it were a function.

### Keywords in classes and objects :
### 1. class 
Defines a new class type
### 2. Public 
Specifies that members following this keyword are accessible from outside the class
### 3. Private 
Specifies that members following this keyword are accessible only within the class itself
### 4. Protected
Specifies that members following this keyword are accessible within the class and its derived classes, but not from outside.
### 5. Virtual 
Specifies that a member function can be overridden in derived classes. This is crucial for polymorphism.
### 6. Const
Specifies that a member function does not modify the state of the object. It can be applied to methods and variables
### 7. New
Pointer to the current object instance within a member function
### 8. Friend
Allows a function or another class to access private and protected members of the class
### 9. Override
Indicates that a member function overrides a virtual function in a base class. This keyword helps catch errors if the function signature doesn’t match.
### 10. Static 
Specifies that a member belongs to the class rather than any instance of the class. Static members are shared among all instances

### Access Specifiers Comparison

Access specifiers determine the visibility and accessibility of class members (attributes and methods).

| Access Specifier | Definition                                      | Visibility                       | Example Usage     |
|------------------|-------------------------------------------------|---------------------------------|--------------------|
| **Public**       | Members are accessible from outside the class. | Unrestricted access.             | `self.attribute1` |
| **Private**      | Members are accessible only within the class.  | Restricted access (prefix with `__`). | `self.__attribute1` |
| **Protected**    | Members are accessible within the class and subclasses. | Limited access (prefix with `_`). | `self._attribute1` |

### Global and Local Variables
***Global Variables***:
- **Definition**: Variables declared outside of any function or class. They are accessible from any part of the program.
- **Scope**: Entire program.

***Local Variables***:
- **Definition**: Variables declared within a function or block. They are only accessible within that function or block.
- **Scope**: Limited to the function or block where they are declared.
  
## Codes :
### 1.
```
//sneha diwan
//23070123126
//entc-B2
//experiment-11
# include<iostream>
using namespace std;
class cube{
    public:
    double height = 4.0;
    double length = 5.0;
    double width = 9.0;

};
int main(){
    cube c1;
    double volume=c1.height*c1.width*c1.length;
    cout<<"volume is: "<<volume<<endl;
}
```
### 2.
```
//sneha diwan
//23070123126
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
class cube
{
    public:
    double height=3.0;
    double width=4.0;
    double length=5.0;

    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
}
```

### 3.
```
//sneha diwan
//23070123126
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
//concept of public and private variables in class
class cube
{
    private:
    double height=4.0;
    double width=5.0;
    double length=6.0;

    public:
    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
}
```

### 4.
```
//sneha diwan
//23070123126
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
//display function inside function
class cube
{
    public:
    double height=5.0;
    double width=6.0;
    double length=7.0;

    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
    void disp_vol(double vol)
    {
        cout<<"volume :"<<vol<<endl;
    }
};
int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
    cube1.disp_vol(v);
}
```
### 5.
```
//sneha diwan
//23070123126
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
//display function inside class
class volume{
    public:
    float height;
    float width;
    float length;
    void input()
    {
        cout<<"enter the value of length: ";
        cin>>length;
        cout<<"enter the value of width: ";
        cin>>width;
        cout<<"enter the value of height: ";
        cin>>height;
    }
    float vol()
    {
        float v=length*width*height;
        return v;
    }
    void display()
    {
        double a=vol();
        cout<<"the volume is :"<<a;
    }
};
int main()
{
    volume volume1;
    volume1.input();
    float a=volume1.vol();
    cout<<a;
}
```
## Conclusion :
- **Classes** define the structure and behaviors of objects. They encapsulate data and methods into a single unit.
- **Objects** are instances of classes and hold specific data values.
- **Access Specifiers** (Public, Private, Protected) control how and where class members can be accessed and modified.
