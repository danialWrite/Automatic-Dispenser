# Automatic-Dispenser
HardWare:
:: Arduino UNO
:: Motor Pump
:: 2 Potentiometer
:: Servo
:: 5 leds YELLOW
:: 1 led RED (POWER)
:: IR sensor
Working:
When the sensor senses a glass it waits for some time to make sure it is a glass (as it doesnt move)it then checks the ml pot which is how much water ,it turns the relay that has a motor HIGH according to the quantity,
The other potentiometer is for refilling the value of pot is mapped to 0-180 it turns the servo around acc to the value mapped the servo moves the cardboard aside so the bottle can be refilled.
