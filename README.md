# 42SiliconValley

A collection of (almost) all the code generated during the March 2018 Piscine.

## Notes and Recommendations

### Grading

The final grade for each exercise will be given by the following: <a href="https://www.codecogs.com/eqnedit.php?latex=\min(MGrade,&space;AVGrade)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\min(MGrade,&space;AVGrade)" title="\min(MGrade, AVGrade)" /></a>, where, if not clear enough, MGrade will be the grade given by Moulinette, and AVGrade will be the average of grades given by your peers (who corrected your exercises), but **only if these two grades differ by a sufficiently large margin**. 

For example, if Moulinette grades you 10, and the average grade you get from your peer revisions is 90, then your final grade will be 10 (note that the other way is also true). Another example is if Moulinette gives you a final grade of 50 and your peer revision average is 57, then your final grade will be 57, so the margin of difference for the minimum grade equation above is *suspected* to be 10 points.

### Coding in C

For the exercises when starting to code in C, I advise you to use [42 Stupidity](https://github.com/mirror12k/42us-stupidity). The instructions are quite straightforward, but I will repost them here:

1) Git clone the 42 Stupidity repository, then clone inside of it the work repository you wish to check.

2) Run `./spawn.pl name_of_cloned_repo_to_check config_<day>.pl` (change the day to that of the repository you are checking).
3) Run `./tools/build.sh` (this will build the corresponding `main.c` for each function).
4) Run `./tools/verify.sh` (this will run `Norminette` with the appropiate flags).
5) Run `./tools/check_all.sh` (this will perform some tests on each function).

Or, far simpler, use [Towel](https://github.com/oscardemadriz/towel), which will do all these things automatically for you.

If all goes well, either method should display `good!` next to each exercise.AV

Finally, if this is your first time coding in general, then the mechanisms that are happening behind the scenes might seem too abstract at the beginning. For this I advise you to use the [C Tutor](http://pythontutor.com/c.html#mode=edit), where you can visualize each step the computer takes as it executes your code.

Good luck, and don't drown!

### License

This work is published under the the terms of [42 Unlicense](https://github.com/PDillis/42SiliconValley/blob/master/LICENSE).
