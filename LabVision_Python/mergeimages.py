from PIL import Image

imagen1 = Image.open("C:\\Users\\Usernamee\\Desktop\\image1.png")
imagen2 = Image.open("C:\\Users\\Username\\Desktop\\image2.png")
#480x360
#380x260
area = (190,130,290,230)
cropped_img = imagen1.crop(area)

imagen2.show()
cropped_img.show()
img = cropped_img.save("centro.png") 
centro = Image.open("C:\\Users\\Mike\\Desktop\\newimage.png")
imagen2.paste(centro, area)
imagen2.save('resultado.png')