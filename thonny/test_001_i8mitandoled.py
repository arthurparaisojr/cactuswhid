from machine import Pin
from time import sleep

led = Pin(2, Pin.OUT)  # Substitua 2 pelo GPIO usado no LED

while True:
    print("LED Ligado")
    sleep(1)
    print("LED Desligado")
    sleep(1)

