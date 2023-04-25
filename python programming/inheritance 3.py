class Parent:
    def __init__(self,pname,pfather):
        self.pname = pname
        self.pfather = pfather
    def pdata(self):
        print('pname is ',self.pname)
        print('pfather is ',self.pfather)
class Test(Parent):
    def __init__(self,name,father):
        self.name = name
        self.father = father
    def data(self):
        print('name is ',self.name)
        print('father is ',self.father)
class Child(Test):
    def __init__(self,age,gender):
        self.age = age
        self.gender = gender
    def cdata(self):
        print('age is ',self.age)
        print('gender is ',self.gender)
class Gchild(Child):
    def __init__(self,pname,pfather,city,country):
        self.city = city
        self.country = country
        # super().__init__(age, gender)
        # super(Test, self).__init__('ram', 'dashrath')
        Parent.__init__(self, pname, pfather)
    def gdata(self):
        print('city is ',self.city)
        print('country is ',self.country)
obj = Gchild('ram','dashrath','kanpur', 'india')
obj.gdata()
# obj.cdata()
# obj.data()
obj.pdata()