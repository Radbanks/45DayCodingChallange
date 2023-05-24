
string dayOfTheWeek(int day, int month, int year) 
{
    /* https://www.codingninjas.com/codestudio/problems/day-of-the-week_668910?topList=45-day-coding-challenge
    Following is a simple function suggested by Sakamoto, Lachman, Keith and Craver to calculate day. The following function returns 0 for Sunday, 1 for Monday, etc.

    Understanding the Maths:

    14/09/1998
    dd=14
    mm=09
    yyyy=1998 //non-leap year

    Step 1: Information to be remembered.
    Magic Number Month array.
    For Year: {0,3,3,6,1,4,6,2,5,0,3,5}
    DAY array starting from 0-6: {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}
    Century Year Value: 1600-1699 = 6
        1700-1799 = 4
        1800-1899 = 2
        1900-1999 = 0
        2000-2099 = 6..

    Step 2: Calculations as per the steps
    
    Last 2 digits of the year:  98
    Divide the above by 4:     24
    Take the date(dd):      14
    Take month value from array: 5 (for September month number 9)
    Take century year value:  0  ( 1998 is in the range 1900-1999 thus 0)
            -----
    Sum:        141
    
    Divide the Sum by 7 and get the remainder: 141 % 7 = 1
    
    Check the Day array starting from index 0: Day[1] = Monday

    **If leap year it will be the remainder-1*/


    // Write your code here.
    int MagicNumber[]={ 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    string Day[]={"Sunday","Monday","Tuesday","Wednesday", "Thursday", "Friday","Saturday"};
    int Sum=0;
    /*cout<<"MagicNumber: "<<MagicNumber[month-1]<<endl;
    cout<<"lasttwodigits "<<lasttwodigits<<endl;
    cout<<"year/4: "<<yearby4<<endl;
    cout<<"day: "<<day<<endl;
    cout<<"Century:  "<<CenturyVal<<endl;*/
    if( month <3)
        year-=1;

    Sum= MagicNumber[month-1] + year/4 + day + year-year/100+year/400;
    int Final=Sum%7;
    cout<<"\nFinal: "<<abs((Sum%7))<<endl;
    cout<<"Sum: "<<Sum<<endl;
    return Day[Final];

}
