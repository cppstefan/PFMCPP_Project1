#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       clock
//  action 1:   set the hour
clock.setHour();
//  action 2:   set the minutes
clock.setMinute()
//  action 3:   set the Time zone
clock.setTimezone();
//  2)
//  Noun:       speaker
//  action 1:   turn the volume up
speaker.volumeUp();
//  action 2:   turn the volume down
speaker.volumeDown();
//  action 3:   connect the speaker
speaker.connect();
//  3)
//  Noun:       folder
//  action 1:   create the folder
folder.create();
//  action 2:   open the folder
folder.open();
//  action 3:   close the folder
folder.close();
//  4)
//  Noun:       track
//  action 1:   play the music track
track.play();
//  action 2:   pause the music track
track.pause();
//  action 3:   stop the music track
track.stop();
//  5)
//  Noun:       vehicle
//  action 1:   move the vehicle forward
vehicle.moveForward();
//  action 2:   move the vehicle backward
vehicle.moveBackward();
//  action 3:   turn the vehicle left
vehicle.turnLeft();
//  6)
//  Noun:       text
//  action 1:   copies the text
text.copy();
//  action 2:   pastes the text
text.paste();
//  action 3:   removes the text
text.remove();
//  7)
//  Noun:       player
//  action 1:   player runs
player.run();
//  action 2:   player crawls
player.crawl();
//  action 3:   player jumps
player.jump();
//  8)
//  Noun:       drone
//  action 1:   the drone takes off
drone.takeOff();
//  action 2:   the drone lands
drone.land(); 
//  action 3:   the drone follows
drone.follow();
//  9)
//  Noun:       window
//  action 1:   hides the window
window.hide();
//  action 2:   makes the window visible
window.visible();
//  action 3:   changes size of window
window.changeSize();
//  10)
//  Noun:       waveform
//  action 1:   compresses the waveform
waveform.compress();
//  action 2:   filters the waveform
waveform.filter();
//  action 3:   modulate the waveform
waveform.modulate();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
