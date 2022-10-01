import cv2
import numpy as np

#Web-cam detection
cap = cv2.VideoCapture(0)
cap.set(3, 640)
cap.set(4, 400)
cap.set(10, 200)

myColors = [[0, 107, 0, 5, 255, 255]]
myColorValues = [[0, 0, 255]]
myPoints = []    ##[x,y,colorId]

def findColor(img, myColor, myColorValue) :
    imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
    count = 0
    newPoints = []
    for color in myColor:
        lower = np.array(color[0:3])
        upper = np.array(color[3:6])
        mask = cv2.inRange(imgHSV, lower, upper)
        x, y = getContours(mask)
        cv2.circle(imgResult, (x, y), 10, myColorValue[count], cv2.FILLED)
        if x!=0 and y!=0:
            newPoints.append([x, y, count])
        count += 1
        #cv2.imshow(str(color[0]), mask)
    return newPoints

def getContours(img):
    contours, hierarchy = cv2.findContours(img, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
    x, y, w, h = 0, 0, 0, 0
    for cnt in contours:
        area = cv2.contourArea(cnt)
        if area > 500:
            #cv2.drawContours(imgResult, cnt, -1, (255, 0, 0), 3)
            peri = cv2.arcLength(cnt, True)
            approx = cv2.approxPolyDP(cnt, 0.02*peri, True)
            x, y, w, h = cv2.boundingRect(approx)
            cv2.rectangle(imgResult, (x, y), (x+w, y+h), (0, 0, 255), 2)
    return x+w//2, y

while True:
    success, img = cap.read()
    imgResult = img.copy()
    newPoints = findColor(img, myColors, myColorValues)
    if len(newPoints) != 0 :
        for newP in newPoints:
            myPoints.append(newP)
    #if len(myPoints) != 0 :
        #drawOnCanvas(myPoints, myColorValues)
    cv2.imshow("Result", imgResult)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break


