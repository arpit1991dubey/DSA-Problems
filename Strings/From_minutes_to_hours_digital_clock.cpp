/*
Diplay the time input in minutes in hours in a digital clock upto two digits;
eg- input -1180
    output- 19:40
*/
#include<string>
#include<bits/stdc++.h>
using namespace std;

string convert_to_digital_time(int minutes){
    //complete this function
    string res;
    int hours=0;
    while(minutes>=60)
    {
        minutes-=60;
        hours++;
    }
    if(minutes>=0 && minutes<10 )
    {
        res=to_string(hours)+":0"+to_string(minutes);
    }
    else
    {
        res=to_string(hours)+":"+to_string(minutes);
    }
    return res;
}
