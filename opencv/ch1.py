import cv2
print("Package imported")

'''
img = cv2.imread(filename of image)
cv2.imshow("Output",img)
cv2.waitKey(0) 0 means infinite here
'''

'''
cap = cv2.VideoCapture('Path of video')
while True:
    success, img = cap.read()
    cv2.imshow("video",img)
    if cv2.waitKey(1) & 0xFF ==ord('q'):
        break
'''


#for webcam
cap = cv2.VideoCapture(0)
cap.set(3, 640)    #height
cap.set(4, 400)    #width
cap.set(10, 100)   #brightness
while True:
    success, img = cap.read()
    cv2.imshow("video", img)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

