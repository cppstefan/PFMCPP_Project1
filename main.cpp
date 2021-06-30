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
//  action 1:   the clocks hour gets set
clock.setHour();
//  action 2:   the clocks minute gets set
clock.setMinute()
//  action 3:   the clocks timezone gets set
clock.setTimezone();
//  2)
//  Noun:       speaker
//  action 1:   the speakers volume turns up
speaker.turnVolumeUp();
//  action 2:   the speakers volume turns down
speaker.turnVolumeDown();
//  action 3:   the speaker connects
speaker.connect();
//  3)
//  Noun:       folder
//  action 1:   the folder is created
folder.create();
//  action 2:   the folder opens
folder.open();
//  action 3:   the folder closes
folder.close();
//  4)
//  Noun:       track
//  action 1:   the track plays
track.play();
//  action 2:   the track pauses
track.pause();
//  action 3:   the track stops
track.stop();
//  5)
//  Noun:       vehicle
//  action 1:   the vehicle moves forward
vehicle.moveForward();
//  action 2:   the vehicle moves backward
vehicle.moveBackward();
//  action 3:   the vehicle turns left
vehicle.turnLeft();
//  6)
//  Noun:       text
//  action 1:   the text gets copied
text.copy();
//  action 2:   the text gets pasted
text.paste();
//  action 3:   the text gets removed
text.remove();
//  7)
//  Noun:       player
//  action 1:   the player runs
player.run();
//  action 2:   the player crawls
player.crawl();
//  action 3:   the player jumps
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
//  action 1:   the window hides
window.hide();
//  action 2:   the window shows
window.show();
//  action 3:   the window changes size
window.changeSize();
//  10)
//  Noun:       waveform
//  action 1:   the waveform gets compressed
waveform.compress();
//  action 2:   the waveform gets filtered
waveform.filter();
//  action 3:   the waveform gets modulated
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
