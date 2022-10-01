import cv2
import numpy as np

'''
img = cv2.imread("filename")
kernel = np.ones((5,5),np.unit8)

imgGray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY) gives a grayscale image
imgBlur = cv2.GaussianBlur(imgGray,(7,7),0)
imgDialation = cv2.dilate(imgCanny,kernel,iterations=1)
imgEroded = cv2.erode(imgDialation,kernel,iterations=1)
'''
