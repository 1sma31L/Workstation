dead=str(input("are you dead? ")).lower()
stress=str(input("are you stressed? ")).lower()
def dontbestressed():
    print("keep trying")
def life():
    if dead == "yes":
        print("you are dead")

    elif dead == "no":
        print("you are alive")

    if stress == "yes":
        dontbestressed()

    elif stress == "no":
        print("you are not stressed")
life()
