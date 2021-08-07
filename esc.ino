#include "escout.h"
int x, n;
int a, b, c, d;
#define t 1050
#define test2 1
#define test2_1 1
void setup()
{
    Serial.begin(115200);
    esc_init(26, 25, 33, 32);
    esc_write(1000, 1000, 1000, 1000);
}
void loop()
{
#ifdef test
    if (Serial.available())
    {
        n = Serial.read();
        n == 10 ? x : x = n;
        if (n == 97)
            a = 1;
        if (n == 98)
            b = 1;
        if (n == 99)
            c = 1;
        if (n == 100)
            d = 1;
    }
    //esc_write((x-48)*200+1000,(x-48)*200+1000,(x-48)*200+1000,(x-48)*200+1000);

    if (a)
    {
        esc_write(t, 0, 0, 0);
        Serial.println('a');
    }
    else if (b)
    {
        esc_write(0, t, 0, 0);
        Serial.println('b');
    }

    else if (c)
    {
        esc_write(0, 0, t, 0);
        Serial.println('c');
    }
    else if (d)
    {
        esc_write(0, 0, 0, t);
        Serial.println('d');
    }
    else
    {
        esc_write(0, 0, 0, 0);
    }

#endif
#ifdef test2
    if (Serial.available())
    {
        n = Serial.read();
        10 == n ? x : x = n;
    }
#ifdef test2_1
    if(x==48)
    {   esc_write(1000,1000,1000,1000);
        Serial.println(1000);
    }
    else{
    esc_write((x - 48) * 200 + 1000,(x - 48) * 200 + 1000,(x - 48) * 200 + 1000,(x - 48) * 200 + 1000);
    Serial.println((x - 48) * 200 + 1000);}
#endif
#ifdef test2_3

    if (x == 1)
    {
        esc_write(t, 1000, 1000, 1000);
        Serial.println(x);
    }
    else if (x == 2)
    {
        esc_write(1000, t, 1000, 1000);
        Serial.println(x);
    }
    else if (x == 3)
    {
        esc_write(1000, 1000, t, 1000);
        Serial.println(x);
    }
    else if (x == 4)
    {
        esc_write(1000, 1000,1000, t);
        Serial.println(x);
    }
    if(x==0) esc_write(1000,1000,1000,1000);
    delay(10);
#endif
#endif
}
