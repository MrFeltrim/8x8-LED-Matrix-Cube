{\rtf1\ansi\ansicpg1252\cocoartf1504\cocoasubrtf830
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #define button A4\
\
\
#define ROW_1 2\
#define ROW_2 7\
#define ROW_3 A3\
#define ROW_4 5\
#define ROW_5 10\
#define ROW_6 A2\
#define ROW_7 11\
#define ROW_8 A0\
\
#define COL_1 9\
#define COL_2 8\
#define COL_3 4\
#define COL_4 A1\
#define COL_5 3\
#define COL_6 13\
#define COL_7 12\
#define COL_8 6\
\
const byte rows[] = \{\
    ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8\
\};\
\
\
int x = 20;\
//--------------------------------------------------------------------------- \
byte aone[] = \{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18\};\
byte atwo[] = \{0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18\};\
byte athree[] = \{0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0\};\
byte afour[] = \{0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0\};\
byte afive[] = \{0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0\};\
byte asix[] = \{0x0,0x0,0x18,0x18,0x0,0x0,0x0,0x0\};\
byte aseven[] = \{0x0,0x18,0x18,0x0,0x0,0x0,0x0,0x0\};\
byte aeight[] = \{0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x0\};\
byte anine[] = \{0x7e,0xff,0xff,0xff,0xff,0xff,0xff,0xff\};\
byte aten[] = \{0x3c,0x7e,0xff,0xff,0xff,0xff,0xff,0xff\};\
byte aeleven[] = \{0x18,0x3c,0x7e,0xff,0xff,0xff,0xff,0xff\};\
byte atwelve[] = \{0x0,0x18,0x3c,0x7e,0xff,0xff,0xff,0xff\};\
byte athirteen[] = \{0x0,0x0,0x18,0x3c,0x7e,0xff,0xff,0xff\};\
byte afourteen[] = \{0x0,0x0,0x0,0x18,0x3c,0x7e,0xff,0xff\};\
byte afifteen[] = \{0x0,0x0,0x0,0x0,0x18,0x3c,0x7e,0xff\};\
byte asixteen[] = \{0x0,0x0,0x0,0x0,0x0,0x18,0x3c,0x7e\};\
byte aseventeen[] = \{0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x3c\};\
//--------------------------------------------------------------------------- \
byte smile[] = \{0x0,0x66,0x66,0x0,0x0,0x42,0x3c,0x0\};\
byte sad[] = \{0x0,0x66,0x66,0x0,0x0,0x3c,0x42,0x0\};\
byte shocked[] = \{0x0,0x66,0x66,0x0,0x3c,0x24,0x3c,0x0\};\
byte neutral[] = \{0x0,0x66,0x66,0x0,0x0,0x0,0x7e,0x0\};\
byte blank[] = \{0x0,0x66,0x66,0x0,0x0,0x0,0x0,0x0\};\
//--------------------------------------------------------------------------- \
byte empty[] = \{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0\};\
byte full[] = \{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff\};\
//--------------------------------------------------------------------------- \
byte zero[] = \{0x1c,0x22,0x22,0x22,0x22,0x22,0x22,0x1c\};\
byte one[] = \{0x8,0x18,0x8,0x8,0x8,0x8,0x8,0x1c\};\
byte two[] = \{0x1c,0x22,0x2,0x2,0x4,0x8,0x10,0x3e\};\
byte three[] = \{0x1c,0x22,0x2,0x4,0x2,0x2,0x22,0x1c\};\
byte four[] = \{0x20,0x20,0x20,0x20,0x24,0x24,0x3e,0x4\};\
byte five[] = \{0x3e,0x20,0x20,0x3c,0x2,0x2,0x22,0x1c\};\
byte six[] = \{0x1c,0x22,0x20,0x20,0x3c,0x22,0x22,0x1c\};\
byte seven[] = \{0x3e,0x2,0x2,0x4,0x8,0x10,0x20,0x20\};\
byte eight[] = \{0x1c,0x22,0x22,0x1c,0x22,0x22,0x22,0x1c\};\
byte nine[] = \{0x1c,0x22,0x22,0x22,0x1e,0x2,0x22,0x1c\};\
//--------------------------------------------------------------------------- \
float timeCount = 0;\
//--------------------------------------------------------------------------- \
int state = 0;\
int old = 0;\
int buttonPoll = 0;\
//--------------------------------------------------------------------------- \
void setup() \{\
    // Open serial port\
    Serial.begin(9600);\
    for (byte i = 2; i <= 13; i++)\
    pinMode(i, OUTPUT);\
    pinMode(A0, OUTPUT);\
    pinMode(A1, OUTPUT);\
    pinMode(A2, OUTPUT);\
    pinMode(A3, OUTPUT);\
    pinMode(button, INPUT);\
\}\
//--------------------------------------------------------------------------- \
void loop() \{\
\
  Serial.println(buttonPoll);\
  \
  delay(2);\
  timeCount += 1;\
\
    buttonPoll = digitalRead(button);\
  if(buttonPoll == 1)\{\
    delay(2);\
    buttonPoll = digitalRead(button);\
    if(buttonPoll == 0)\{\
      state = old + 1;     \
    \}\}\
  else\{\
    delay(2);\
  \}\
\
//--------------------------------------------------------------------------- \
    switch (state)\{\
//---------------------------------------------------------------------------      \
      case 1:\
      \
      delay(2);\
      timeCount += 1;\
     \
    if(timeCount <  1 * x ) \{\
      drawScreen(aone);\
    \}  \
    else if (timeCount <  2 * x ) \{\
      drawScreen(atwo);\
    \}\
     else if (timeCount <  3 * x ) \{\
      drawScreen(athree);\
    \} \
    else if (timeCount <  4 * x ) \{\
      drawScreen(afour);\
    \}  \
    else if (timeCount <  5 * x ) \{\
      drawScreen(afive);\
    \} \
    else if (timeCount <  6 * x ) \{\
      drawScreen(asix);\
    \} \
    else if (timeCount <  7 * x ) \{\
      drawScreen(aseven);\
    \} \
     else if (timeCount <  8 * x ) \{\
      drawScreen(aeight);\
    \}  \
    else if (timeCount <  9 * x ) \{\
      drawScreen(anine);\
    \} \
    else if (timeCount <  10 * x ) \{\
      drawScreen(aten);\
    \} \
    else if (timeCount <  11 * x ) \{\
      drawScreen(aeleven);\
    \} \
     else if (timeCount <  12 * x ) \{\
      drawScreen(atwelve);\
    \} \
    else if (timeCount <  13 * x ) \{\
      drawScreen(athirteen);\
    \} \
    else if (timeCount <  14 * x ) \{\
      drawScreen(afourteen);\
    \} \
    else if (timeCount <  15 * x ) \{\
      drawScreen(afifteen);\
    \} \
    else if (timeCount <  16 * x ) \{\
      drawScreen(asixteen);\
    \} \
    else if (timeCount <  17 * x ) \{\
      drawScreen(aseventeen);\
    \} \
    else \{\
      timeCount = 0;\
    \}\
    old = state;\
    break;\
//---------------------------------------------------------------------------     \
      case 2:\
      \
      delay(2);\
      timeCount += 1;\
    \
     if(timeCount <  10 * x) \{\
      drawScreen(smile);\
    \}  \
    else if (timeCount <  20 * x ) \{\
      drawScreen(sad);\
    \}\
     else if (timeCount <  30 * x ) \{\
      drawScreen(shocked);\
    \} \
    else if (timeCount <  40 * x ) \{\
      drawScreen(neutral);\
    \}  \
    else if (timeCount <  50 * x ) \{\
      drawScreen(blank);\
    \} \
    else\{\
      timeCount = 0;\
    \}\
    old = state;\
    break;\
//--------------------------------------------------------------------------- \
      case 3:\
      \
      delay(2);\
      timeCount += 1;\
    \
     if(timeCount <  5 * x) \{\
      drawScreen(one);\
    \}  \
    else if (timeCount <  10 * x ) \{\
      drawScreen(two);\
    \}\
     else if (timeCount <  15 * x ) \{\
      drawScreen(three);\
    \} \
    else if (timeCount <  20 * x ) \{\
      drawScreen(four);\
    \}  \
    else if (timeCount <  25 * x ) \{\
      drawScreen(five);\
    \} \
     else if (timeCount <  30 * x ) \{\
      drawScreen(six);\
    \} \
     else if (timeCount <  35 * x ) \{\
      drawScreen(seven);\
    \} \
     else if (timeCount <  40 * x ) \{\
      drawScreen(eight);\
    \} \
     else if (timeCount <  45 * x ) \{\
      drawScreen(nine);\
    \} \
     else if (timeCount <  50 * x ) \{\
      drawScreen(zero);\
    \} \
    else \{\
      timeCount = 0;\
    \}\
    old = state;\
       break;\
//--------------------------------------------------------------------------- \
      default:\
    \
      delay(2);\
      timeCount += 1;\
    \
    if(timeCount <  3 * x ) \{\
      drawScreen(empty);\
    \}  \
    else if (timeCount <  6 * x ) \{\
      drawScreen(full);\
    \}\
    else \{\
      timeCount = 0;\
    \}\
    old = 0;\
    break;\
\}\}\
//--------------------------------------------------------------------------- \
 void  drawScreen(byte buffer2[])\{\
     \
    \
   // Turn on each row in series\
    for (byte i = 0; i < 8; i++) \{\
        setColumns(buffer2[i]); // Set columns for this specific row\
        \
        digitalWrite(rows[i], HIGH);\
        delay(2); // Set this to 50 or 100 if you want to see the multiplexing effect!\
        digitalWrite(rows[i], LOW);\
        \
    \}\
\}\
\
//--------------------------------------------------------------------------- \
void setColumns(byte b) \{\
    digitalWrite(COL_1, (~b >> 0) & 0x01); // Get the 1st bit: 10000000\
    digitalWrite(COL_2, (~b >> 1) & 0x01); // Get the 2nd bit: 01000000\
    digitalWrite(COL_3, (~b >> 2) & 0x01); // Get the 3rd bit: 00100000\
    digitalWrite(COL_4, (~b >> 3) & 0x01); // Get the 4th bit: 00010000\
    digitalWrite(COL_5, (~b >> 4) & 0x01); // Get the 5th bit: 00001000\
    digitalWrite(COL_6, (~b >> 5) & 0x01); // Get the 6th bit: 00000100\
    digitalWrite(COL_7, (~b >> 6) & 0x01); // Get the 7th bit: 00000010\
    digitalWrite(COL_8, (~b >> 7) & 0x01); // Get the 8th bit: 00000001\
   \
\}}