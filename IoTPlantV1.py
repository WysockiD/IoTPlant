import tweepy
import time
import serial

consumer_key = ""
consumer_secret = ""
access_token = ""
access_token_secret = ""

serial_port = ''
baud_rate =  

auth = tweepy.OAuthHandler(consumer_key, consumer_secret)

auth.set_access_token(access_token, access_token_secret)
api = tweepy.API(auth)

ser = serial.Serial(serial_port, baud_rate)
while True:
    line = ser.readline()
    line = line.decode("utf-8")

    value = float(line)

    if (value < ):

        api.update_status(status="".format(value))
    else:
        print("".format(value))
    time.sleep()
