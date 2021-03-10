from PIL import Image

img = Image.open("C:\\Users\\Username\\Desktop\\image.png")

area = (190,130,290,230)
cropped_img = img.crop(area)

img.show()
cropped_img.show()
img = cropped_img.save("centro.png") 
