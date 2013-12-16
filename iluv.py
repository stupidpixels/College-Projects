import math
 
print ("Attack of the quadratic formula!!")
print ("Begin")
 
a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))
answer1 = (-b + math.sqrt(b ** 2 - 4 * a * c)) / 2
answer2 = (-b - math.sqrt(b ** 2 - 4 * a * c)) / 2
 
print 'Your answer is..', answer1, answer2
print ("There you go!")