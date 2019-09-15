# aman

Lifi communication using IR LED and photodiode with wiznet board

Above files are sender and reciever code for lifi (data transfer using ir led and photodiode)
this is using wiznet board w6100 ethernet shield it is used because to publish the recieved data to the server which is using MQTT server.

Lifi also can use normal L.E.D 's(sender) and LDR sensor(reciever) to transfer data , but during data transmition because surrounding light
data can interupt and will not get desired result.

thats why i have used IR LED which has high wavelenght than visible light and faster transmission, so it has less effect on surronding light.
