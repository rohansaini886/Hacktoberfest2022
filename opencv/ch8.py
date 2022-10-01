import cv2
import numpy as np

'''
def getContours(img): 
    contours, heirarchy = cv2.findContours(img,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_NONE)
    for cnt in contours:
        area = cv2.contourArea(cnt)
        print(area)
        if area > 500:
            cv2.drawContours(imgContour,cnt,-1,(255,0,0),3)
            peri = cv2.arcLength(cnt,True)
            print(peri)
            approx = cv2.approxPolyDP(cnt,0.02*peri,True)
            print(approx)
            objCor = len(approx)  //gives number of sides
            x, y, w, h = cv2.boundingRect(approx)  //w->width, h->height
            if objCor == 3: objectType = "Tri"
            elif objCor == 4: 
                aspRatio = w/float(h)   //ratio of width and height
                if aspratio > 0.95 and aspRatio < 1.05: objectType = "Square"   //allowing 5% deviation
                else: objectType = "Rectangle"
            elif objCor > 4: objectType = "Circle"
            else: objectType = "None"
            
            cv2.rectangle(imgContour,(x,y),(x+w,y+h),(0,255,0),2)
            cv2.putText(imgContour,objectType,(x+(w/2)-10),(y+(h/2)-10),cv2.FONT_HERSHEY_COMPLEX,0.5,(0,255,0),2)
            

path = 'Resources/shapes.png'
img = cv2.imread(path)
imgContour = img.copy()

imgGray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
imgBlur = cv2.Gaussianblur(imgGray,(7, 7),1)
imgCanny = cv2.Canny(imgBlur,50,50)
getContours(imgCanny)
imgBlank = np.zeros_like(img)

cv2.imshow("Original",img)
cv2.imshow("Gray",imgGray)
cv2.imshow("Blur",imgBlur)
cv2.waitKey(0)
'''