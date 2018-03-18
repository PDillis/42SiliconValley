# 42SiliconValley

A collection of (almost) all the code generated during the March 2018 Piscine.

### Notes and Recommendations

The final grade for each exercise will be given by the following <a href="https://www.codecogs.com/eqnedit.php?latex=\min(MGrade,&space;AVGrade)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\min(MGrade,&space;AVGrade)" title="\min(MGrade, AVGrade)" /></a>, where, if not clear enough, MGrade will be the grade given by Moulinette, and AVGrade will be the average of grades given by your peers (who corrected your exercises).

For the exercises when starting to code in C, I advise you to use [42 Stupidity](https://github.com/mirror12k/42us-stupidity) ! The instructions are quite straightforward, but I will repost them here:

1) Git clone the 42 Stupidity repository, then clone inside of it the work repository you wish to check.

2) Run `./spawn.pl name_of_cloned_repo_to_check config_<day>.pl` (change the day to that of the repository you are checking).
3) Run `./tools/build.sh` (this will build the corresponding `main.c` for each function).
4) Run `./tools/verify.sh` (this will run `Norminette` with the appropiate flags).
5) Run `./tools/check_all.sh` (this will perform some tests on each function).

Or, far simpler, use [Towel](https://github.com/oscardemadriz/towel), which will do all these things automatically for you.

If all goes well, either method should display `good!` next to each exercise.AV

Don't drown!
