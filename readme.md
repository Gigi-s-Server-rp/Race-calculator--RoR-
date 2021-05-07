# Read me
My first real Project using C++. I want to create a calculator for lap-times. This will be used for my Events (RoR mp).

## Checklist
- [X] Create the calculator
- [X] Create the input option
- [X] Release Alpha
- [ ] Do some changes
- [ ] Release Beta
- [ ] Test under real life conditions
- [ ] Improve and release stable version

#### Function
1. User inputs the amount of laps
2. User decides if he wants to use the XX:XX format or direct seconds
3. User inputs the lap-times
4. Calculate the average time

#### Function 2
1. User inputs the amount of races
2. User inputs the positions
3. Calculate the average position

#### Info
I'd like to implement more, but I am still a rookie. I will stick with it, as is.
Users are asked to stick to the XX:XX format if they’ve chosen it. Inputs like “1:16” should be replaced with “01:16”.


#### Error codes
I'm using return values instead of codes.
- 0: End of code . User choose an option which leads to an dead end.
- 500: End of code. Success.
- 501: Unused option for type (time or position). User fault
- 502: Unused option for time format. User fault.

## Versions
- v0.5: Not stable version. I am still working on this project but two out of three calculations are working.
- v1.0: Alpha version. This project is not done yet but it can be used. Note: The calculations may be wrong (+/- 1 second) 
		because I am using integers and no floats or doubles.
