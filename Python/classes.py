class MyClass:
    """"A simple example class"""
    i = 12345
        
    def f(self):   #self refers to the istance of the class on which the method is being called = to this  
        return "Hello World"


# You can access attributes and methods directly from the class:
print(MyClass.i)
print(MyClass.f)  
print(MyClass.__doc__) #returns docstring

class Complex:
    def __init__(self,realpart,imagpart):
        self.r = realpart
        self.i = imagpart
    
x = Complex(3,4)
print(x.r)
print(x.i)

