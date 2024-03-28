my_dict = {'a': 1, 'b': 2, 'c': 3,"aman":678}

"""# Using get() to retrieve value for key 'a'
value_a = my_dict.get('a')
print(value_a)  # Output: 1

# Using get() with a key that doesn't exist
value_d = my_dict.get('d')
print(value_d)  # Output: None

# Providing a default value with get()
value_e = my_dict.get('e', 5)  # If 'e' doesn't exist, return 5
print(value_e)  # Output: 5
print(my_dict.get("aman"))
print(my_dict.keys())
print(my_dict.values())
d={
    'course':'python',
    'fees':8000,
    'duration':'2 months'
}
c=d.get('course')
print(d.items())
del d['fees']
print(d.items())
d.update({'course':'java script'})
print(d.items())
d['course']='rust programming language'
print(d.items())
course={
    'php':{'duration':'3 Months','fees':15000},
    'java':{'duration':'2 Months','fees':10000},
    'python':{'duration':'2 Months','fees':12000},
}
print(course)
print(course['php']['fees'])
print(course['java']['duration'])
for k,v in course.items():
    print(k)
    print(v)

aman=(6,73)
print(type(aman))
for i in aman:
    pass
a=lambda x:x*x
print(a(7))
print(sum(aman))
boy=[1,2,3,4,5,6,7,8,9,10]  
print(sum(boy))
print(len(boy))
print(boy.count(5))
print(boy.index(7))

marking={10,20,30}
for i in marking:
    print(i)
print(type(marking))    
print(marking)
marking.clear()
print(type(marking))
l=[10,20,30,40]
print(type(l))
l=set(l)
print(type(l))
l.add(78)
s={78,93,92,23}
l.update(s)
for i in l:
    print(i)
def command():
    print("this is the cause of")
command()
def showdata():
    print("T")
def nul(a,b):
    return a+b
print("dillem")        
import datetime as dt
x=dt.datetime.now()
print(x)
print(dt.datetime(2022,2,22))
print(help(dt))
# a python program to build a number gussing game:
import random
number=int(input("Enter two digit number :"))
cnumber=random.randrange(1,101);
if(number>cnumber):
    print("your number is too high from",cnumber)
elif(number==cnumber):
    print("your number is exactly equal to",cnumber)    
else:
    print("your number is too low from",cnumber)"""
import pickle 
"""example={1:"aman",2:"78",3:"jackoff"}
file=open("newfile.txt","wb")
pickle.dump(example,file)
file.close()    
file=open("newfile.txt","rb")
hello=pickle.load(file)
print(hello)
file.close()"""



