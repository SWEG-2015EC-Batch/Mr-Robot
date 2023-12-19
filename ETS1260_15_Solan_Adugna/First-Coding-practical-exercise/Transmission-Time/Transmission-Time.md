A.) Problem Analysis:

The task requires creating a program that calculates the time needed to send a file over a serial 
transmission line given the file size, considering a transmission speed of 960 characters per second. 
The file size provided is 400MB (419,430,400 bytes), and the transmission speed is 960 characters 
per second. Here is the problem analysis:

Input
:Transmission speed: 960 characters per second (constant value).
File size: 400MB (419,430,400 bytes) - this is the value we will work with.

Calculation:Process/ Operation:Convert the file size to bits, as transmission speed is in characters per second (1 
byte = 8 bits). Calculate the time required to transmit the entire file using the formula: 
Time In Seconds = file Size Bits / transmission Speed.

Output : Display the calculated time in days, hours, minutes, and seconds.

B.)Aligorithm Design:

Pseudocode:

1 START
2 Read TransmissitonSpeed = 960 (characters per second)
3 Read fileSizeBytes = 419430400 (400MB in bytes)
4 SET fileSizeBits = fileSizeBytes * 8 (convert bytes to bits)
5 SET timeInSeconds = fileSizeBits / transmissionSpeed
6 SET days = timeInSeconds / (24 * 3600) 
7 SET timeInSeconds = timeInSeconds - (days * 24 * 3600)
8 SET hours = timeInSeconds / 3600
9 SET timeInSeconds = timeInSeconds - (hours * 3600) 
10 SET minutes = timeInSeconds / 60
11 SET seconds = timeInSeconds - (minutes * 60)
12 DISPLAY "Time required to send the file:"
13 DISPLAY "Days: days, Hours: hours, Minutes: minutes, Seconds: seconds"
14 STOP

                    **  Flowchart**

                    ![question 6](https://github.com/SWEG-2015EC-Batch/Mr-Robot/assets/149063873/c967c658-dd24-4395-9c84-c65c51704ea6)


