# 🌱 IoTPlant 🌱


***Meet IoTPlantV1*** 🌱, a plant connected to the internet.. Recently I have been fascinated by the internet of things and how more and more everyday items are being connected to cyberspace, that got me thinking a layer further about the much less explored avenue; the internet of nature. My thesis here is to show how technology can juxtapose its usual reputation to be anti-nature and that the advancement of tech doesn’t have to be bad for the environment, like with most things, it’s not the actual thing that destroys, but how it is used and utilized. With that in my mind I coded 2 programs, connected my plant to the internet and gave it the ability to tweet by itself. IoTPlantV1 takes moisture readings from soil and relays it through a micro controller (arduino uno) running a .ino program that then transmits that info to a micro computer (raspberry Pi 4) that then runs a python program to analyze that reading and if that reading is less than the healthy greater than 20.0% moisture reading that == the soil is dry and its owner(me) should water it. It lets me know this by automatically tweeeting that real time data to its personal Twitter account, I then get a notification about it and without any physical interaction, solely through code and the internet, my plant will be better taken care of and will never go thirsty. I am already thinking about how to develop this concept and further display how through intellect we can connect the natural world to our fractal matrix and still be in unity with nature, we need not disconnect from it. 📝💆‍♂️

![Screenshot_2021-06-11  wysocki dy • Instagram photos and videos](https://user-images.githubusercontent.com/76915554/121640469-42370180-ca8e-11eb-9dd7-5641143fef43.png)



------------------------------------------------------------------------------------------------------------------------------------------------------------------

***IoTPlantV2!!*** 🌱🤖 In this version I explored the positive impact of human generated autonomy. Whether it’s on a small scale and you are going on vacation needing a way to keep your plant from dying. Or on a much larger scale like distributing sensors around trees in high risk forest fire locations and then providing water instantly when a fire is detected, way before a firefighter could ever get there. I believe that what systems we choose to automate will be the deciding factor in how our future shapes up. Just as we are creating autonomous systems for war/deforestation/destruction we are able to use that same intellect to automate ways to gather information on nature and then provide the appropriate solutions, automatically, with little human interaction. Thus allowing nature to flourish along side of us.

How V2 works is the Arduino first asks the soil moisture sensor for a reading, but unlike V1 where python code would be watching for this reading, V2 compares this reading with a condition for the pump system (< 10% moisture), if that condition is met, the Arduino sends power to a relay and fires on the pump for 3 seconds, waits 10, reads the moisture again, fires for 3.. until the soil is above the threshold of 10% moisture. Python code is still watching but it is now watching for the pump to trigger. When it finds that the pump has triggered it automatically updates me via the plants own Twitter telling me what the soil moisture % was, that it is watering/ taking care of it, and the current humidity in the room. Along side the software updates there are hardware upgrades as well: a much better soil moisture sensor (a capacitive one that won’t corrode in the soil and gives more accurate reads), a humidity sensor for extra data, the water pump system of course and I also strapped it to a portable battery pack if I want to use the system for any of my other plants.

Really enjoying expanding these concepts and already working on the most insane idea for V3 🌱🌱

![Screenshot_2021-06-11  wysocki dy • Instagram photos and videos(3)](https://user-images.githubusercontent.com/76915554/121640616-6db9ec00-ca8e-11eb-8502-61aa54fd591c.png)

![Screenshot_2021-06-11  wysocki dy • Instagram photos and videos(4)](https://user-images.githubusercontent.com/76915554/121640672-832f1600-ca8e-11eb-8dfb-a75ad7320374.png)


-----------------------------------------------------------------------------------------------------------------------------------------------------------------



