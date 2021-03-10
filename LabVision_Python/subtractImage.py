import cv2
from PIL import Image


img1 = cv2.imread("C:\\Users\\Username\\Desktop\\image1.png")
img2 = cv2.imread("C:\\Users\\Username\\Desktop\\image2.png")

img1 = cv2.cvtColor(img1, cv2.COLOR_BGR2RGB)
img2 = cv2.cvtColor(img2, cv2.COLOR_BGR2RGB)

sub_img = cv2.subtract(img1,img2)

sub_img2= Image.fromarray(sub_img)
sub_img2.save("image3.png")