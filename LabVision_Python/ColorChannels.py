from PIL import Image
im = Image.open('image.png').convert('RGB')

r,g,b = im.split()

r = b.point(lambda i: i* 1)
g = g.point(lambda i: i* 1)
b = r.point(lambda i: i* 1)

result = Image.merge('RGB',(r,g,b))

result.save('image2.png')