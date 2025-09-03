import maths
import random
prrint("===python numberical operation using maths and randonm module===")
print ("maths module example   ")
num1=25
print ("square root of",num1,"is",maths.sqrt(num1))
       print ("2 raised to power 6 is",maths.pow(2,6))
       num2=5
       print ("factorial of",num2,"is",maths.factorial(num2))
       trigonometric function
         angle_deg=45
            angle_rad=maths.radians(angle_deg)
            print("sin ("angle_deg.")=".maths.sin(angle_rad))
            print("cos ("angle_deg.")=".maths.cos(angle_rad))
            print("tan ("angle_deg.")=".maths.tan(angle_rad))
            #logarithmic function
                num3=10
                print("natural log of ",num3,"is:",maths.log(num3))
                print("log base 10 of ",num3,"is:",maths.log10(num3))
                num4=7.3
                print("floor of ",num4,"is:",maths.floor(num4))
                print("ceil of ",num4,"is:",maths.ceil(num4))
                #absolute value
                num5=-15
                print("absolute value of ",num5,"is:",maths.fabs(num5))
                a,b =30,60
                print("GCD of ",a,"and",b,"is:",maths.gcd(a,b))
                
                print("random float between 0 and 1:",random.random(1,100))
                print("random number between 10 and 50 (step 5)")
random.randrange(10,51,5)
colors =['red','blue','green','yellow','black']
print("random color from list:",random.choice(colors))
print("random sample of 3 elements from list:",random.sample(colors,3))
print("original list:",colors)
random.shuffle(colors)
print("shuffled list:",colors)
print (" raandom float between 5 and 10:",random.uniform(5,10))
print()

