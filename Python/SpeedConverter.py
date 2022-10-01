
def Speed():
    kmph=input("Enter the speed in Kilometres per hour:")
    kmph=int(kmph)
    mph=(kmph/1.609344)
    mph=int(mph)
    print("Speed in Miles per hour is:",mph)

Speed()