'''
Before reading the code, please read this full description
I know what a function is, and I get that using while this way is not optimal at all,
but I didn't have much time to do this assignment, 
and I didn't really needed it to run in a terminal (also I currently don't use Python that much).
So, yeah, all this code could have been done waaaaay better, but I wanted to save it to laugh at it in the future.

'''
from math import sqrt
from PIL import Image
im = Image.open("C:\\Users\\Username\\Desktop\\image.png")
str = im.getdata()
str1 = list(str)


a=255

i = 0
#Valor Min Rojo(R)
while i < len(str):
    if a>str[i][0]:
        a=str[i][0]
        
    
 #   print(str[i][1])
    i += 1
    if a==0:
        i=len(str)
print("El valor min de Rojo es:",a)


i = 0
#Valor Max Rojo(R)
while i < len(str):
    if a<str[i][0]:
        a=str[i][0]
        
    
 #   print(str[i][1])
    i += 1
    if a==255:
        i=len(str)
print("El valor max de Rojo es:",a)

i = 0
#Valor Min Verde(G)
while i < len(str):
    if a>str[i][1]:
        a=str[i][1]
        
    
 #   print(str[i][1])
    i += 1
    if a==0:
        i=len(str)
print("El valor min de Verde es:",a)


i = 0
#Valor Max Verde(G)
while i < len(str):
    if a<str[i][1]:
        a=str[i][1]
        
    
 #   print(str[i][1])
    i += 1
    if a==255:
        i=len(str)
print("El valor max de Verde es:",a)

i = 0
#Valor Min Azul(G)
while i < len(str):
    if a>str[i][2]:
        a=str[i][2]
        
    
 #   print(str[i][1])
    i += 1
    if a==0:
        i=len(str)
print("El valor min de Azul es:",a)


i = 0
#Valor Max Azul(B)
while i < len(str):
    if a<str[i][2]:
        a=str[i][2]
        
    
 #   print(str[i][1])
    i += 1
    if a==255:
        i=len(str)
print("El valor max de Azul es:",a)

#------------------MEDIA------------------#

i = 0
mediar=0
#Media Rojo(R)
while i < len(str):
        mediar=mediar+str[i][0]
        i += 1
mediar=mediar/len(str)
print("La media de Rojo es:",mediar)

i = 0
mediag=0
#Media Verde(G)
while i < len(str):
        mediag=mediag+str[i][1]
        i += 1
mediag=mediag/len(str)
print("La media de Verde es:",mediag)

i = 0
mediab=0
#Media Azul(B)
while i < len(str):
        mediab=mediab+str[i][2]
        i += 1
mediab=mediab/len(str)
print("La media de Azul es:",mediab)

i = 0
media=0
#Media de Todos los colores
while i < len(str):
        media=media+str[i][0]
        i += 1
media=media/len(str)

i=0

while i < len(str):
        media=media+str[i][1]
        i += 1
media=media/len(str)

i=0
while i < len(str):
        media=media+str[i][2]
        i += 1
media=media/len(str)


print("La media de todos los colores es:",media)




#------------------Desviacion Estandar------------------#


#DE Rojo(R)

a = 0
i = 0

while i < len(str):
        a=a+(((str[i][0])-mediar)**2)
        i += 1
a=a/len(str)
a=sqrt(a)
print("La desviacion estandar de Rojo es:",a)

#DE Verde(G)

a = 0
i = 0

while i < len(str):
        a=a+(((str[i][1])-mediag)**2)
        i += 1
a=a/len(str)
a=sqrt(a)
print("La desviacion estandar de Verde es:",a)

#DE Azuk(B)

a = 0
i = 0

while i < len(str):
        a=a+(((str[i][2])-mediab)**2)
        i += 1
a=a/len(str)
a=sqrt(a)
print("La desviacion estandar de Azul es:",a)

#DE Total

de = 0
i = 0

while i < len(str):
        de=de+(((str[i][0])-media)**2)
        i += 1
        
i = 0

while i < len(str):
        de=de+(((str[i][0])-media)**2)
        i += 1
        
i = 0

while i < len(str):
        de=de+(((str[i][0])-media)**2)
        i += 1
        
de=de/(len(str)*3)
de=sqrt(de)
print("La desviacion estandar de todos los colores juntos es:",de)


#------------------4.2------------------#
#print(str1[5000][1])
#my_list = [len(str)*3]
#my_list[0]=(str1[5000][1])+10
#print(my_list[0])
i=0
j=0
my_list = [len(str)*3]
while i < len(str):
#       my_list[j]=str[i][0]
        my_list.append(str[i][0])
        i += 1
        j += 1
        
i=0        
while i < len(str):
        my_list.append(str[i][1])
        i += 1
        j += 1

i=0        
while i < len(str):
        my_list.append(str[i][2])
        i += 1
        j += 1

#print(my_list)
#print(len(my_list))

i=0        
while i < (len(str)*3):
    
        if(my_list[i]>=media):
            my_list[i]=my_list[i]-media
        else:
            my_list[i]=0
        i += 1
        

#print(my_list)
#print(len(my_list))
#print(de)


i=0        
while i < (len(str)*3):
    
        if(my_list[i]==0):
            my_list[i]=0;
        else:   
            my_list[i]=(de/my_list[i])
            my_list[i]=round(my_list[i])
        i += 1
        
#print(my_list)
print("Cantidad de datos:",len(my_list))

#print(len(my_list))
#print(de)