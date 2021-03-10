import cv2
from PIL import Image


img1 = cv2.imread("C:\\Users\\Username\\Desktop\\image1.png")
img2 = cv2.imread("C:\\Users\\Username\\Desktop\\image2.png")

img3 = cv2.cvtColor(img1, cv2.COLOR_BGR2RGB)
img4 = cv2.cvtColor(img2, cv2.COLOR_BGR2RGB)

sub_img = cv2.add(img3,img4)

sub_img2= Image.fromarray(sub_img)
sub_img2.save("cp0-5-b-1.png")