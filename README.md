# Credit-card-validator
A simple C++ Program which validates the Given Credit Card Number using Luhn's Algorithm.

# Algorithm
- double every second digit, starting from the right. If the results in a two digit number, add both the digits - to obtain a single digit number. Finally, sum all the answers to obtain 'doubleEvenSum'. 
- add every odd placed digit from the right to the value 'doubleEvenSum'
- check if the final 'doubleEvenSum' is a multiple of 10.If yes, it is a valid CC number. Otherwise, not.
