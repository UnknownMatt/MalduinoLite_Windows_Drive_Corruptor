# MalduinoLite_Windows_Drive_Corruptor
This is a script for the Arduino IDE for the Malduino_Lite that makes the Malduino format and corrupts any drive on the host computer it is used on. NOTE: The computer has to be logged in with admin. 

There are two versions packaged: "Malduino_DRIVE_FORMATER" & "Malduino_DRIVE_FORMATER_RickRoll"

The Only diffrence is the "Malduino_DRIVE_FORMATER_RickRoll" file plays Rick Astley's never gonna give you up this adress "https://www.youtube.com/watch?v=dQw4w9WgXcQ" before running the main drive format program.

Note: You must select the correct bord type in the Arduino IDE to upload this code. (There are many good tutorials on youtube).

How it works:
  The program (when run on a computer logged in as administrator) will format all the drives connected to your computer (this includes usb drives as well) when executed. It does this by running DISKPART in command prompt and formating each drive individually for 14 seconds. This in turn corrupts all drives that can be formatted. (Sometimes it may not format the main C: Drive but it will usually corrupt the "System Reserved" partition making the computer unable to boot after a restart).
  
  Disclamer: I am not to be held responseable for any use of this code and it is to be used at your own risk.
  
  Thank you and enjoy.
