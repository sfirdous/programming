class Base:
    def method_A(self):
        print("Base class: method A")
        self.method_B()
    
    def method_B(self):
        print("Base class :Method B")

class Derived(Base):
    def method_B(self):
        print("Derived Class : Method B")
        Base.method_B(self)
    
obj = Derived()
obj.method_A()

print(isinstance(obj,Base))
print(issubclass(Derived,Base))


        