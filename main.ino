/* A memory game for childrens */
// Variables
int grnBtn = 2,
    ylwBtn = 3,
    redBtn = 4,
    bluBtn = 5,
    okBtn = 6,
    upBtn = 7,
    dwnBtn = 8,
    rstBtn = 9,
    buzeer = 10,
    grnLED = 11,
    ylwLED = 12,
    redLED = 13,
    bluLED = 14;
int level = 0;
int LEDS = 1;

/*
 menu 
    player- mmoja /wawili
    level  - 0-5, mtoto, kuanza, mzoefu, mtaalam, auto
    LEDS - 1-4
    speed - auto,taratibu,kawaida,haraka,kasi
    sound  - ndio/hapana
    score
    bestScore
*/

void setup()
{
    // init eeprom
    // read eeprom and set bestScore
}

void loop()
{
    // main loop

    // check bestScore
    // if(score> bestScore) {
    //     bestScore = score
    //     // write bestScore to eeprom
    // }
}

// logics and functions

int numberGen(int level)
{
    // generate random number, whicha are the number of led's blinks depending on the level
    // generate blink times
}
int getLevel(int score)
{
    // Generate the level depending on the score
}
void blink(int blinkCount, int speed)
{
    // blinkCount is an array
    //  [index,value] = led, blinkCounts
    // this will blink individual led as instructed
}
void displayText(int pos, char text)
{
}
void drawScreeen()
{
    // checks ; state ~ praying, over, welcome
}