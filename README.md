# 42SiliconValley

A collection of (almost) all the code generated during the March 2018 Piscine.

### Recommendation

Use [42 Stupidity](https://github.com/mirror12k/42us-stupidity) for the exercises when starting to code in C!

The instructions are quite straightforward, but I will repost them here:

1) Git clone the 42 Stupidity repository, then clone inside of it the work repository you wish to check.

2) Run `./spawn.pl name_of_cloned_repo_to_check config_<day>.pl` (change the day to that of the repository you are checking).
3) Run `./tools/build.sh` (this will build the corresponding `main.c` for each function).
4) Run `./tools/verify.sh` (this will run `Norminette` with the appropiate flags).
5) Run `./tools/check_all.sh` (this will perform some tests on each function).

If all goes well, it will display `good!` next to each exercise.
