from random import*
import os 
u_pwd=input("enter passsword : ")
pwd=['a','b','c','d','e','f','g','h','i','j','k','l','i','1','2','3','4','5','6','7']

pw=""
while(pw!=u_pwd):
    pw=""
    for letter in range(len(u_pwd)):
        guess_pwd=pwd[randint(0,17)]
        pw=str(guess_pwd)+str(pw)
        print(pw)
        print("cracking password...")
        os.system("cls")
print("your password is : ",pw)        