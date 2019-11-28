a=int(input("ENTER YOUR MARK:"))
if(a<0 or a>100):
    print(" input is wrong")
else:
    if(a>=96 and a<=100):
        print("A+")
    elif(a>=91 and a<95):
        print("A")
    elif(a>=81 and a<=90):
        print("B")
    elif(a>=71 and a<=80):
        print("C")
    elif(a>=61 and a<=70):
        print("D")
    elif(a>=50 and a<=60):
        print("E")
    else:
        print("fail")
