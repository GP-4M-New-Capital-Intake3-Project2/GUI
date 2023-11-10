import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
led_pin = 18

GPIO.setup(led_pin, GPIO.OUT)

GPIO.output(led_pin, GPIO.HIGH)

time.sleep(0.5)

GPIO.output(led_pin, GPIO.LOW)

time.sleep(0.5)

GPIO.output(led_pin, GPIO.HIGH)

GPIO.cleanup()
