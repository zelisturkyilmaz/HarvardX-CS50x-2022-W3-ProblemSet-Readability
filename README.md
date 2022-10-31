# CS50's Introduction to Computer Science
## HarvardX - CS50x
### Week 3 Problem Set - Readability.c
<hr>


### Assignment and Requirements:
Write and execute the program that prompts the user for a text and determines its reading level using ```Coleman-Liau index```.

For example, if user types in a line of text from Dr. Seuss, the program should behave as follows:

```
$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
```

#### Coleman-Liau index:
```
index = 0.0588 * L - 0.296 * S - 15.8
```

where ```L``` is the average number of letters per 100 words in the text, and ```S``` is the average number of sentences per 100 words in the text.


#### Compiling And Execution:

Before execution of the program, it must be compiled with a compiler, translating it from source code into machine code.\
Execute the command below in the Command Line to do that:

```C
make readability
```

Execute the program by executing the below:
```C
./readability
```
