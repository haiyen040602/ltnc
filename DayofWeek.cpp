#include <iostream>
using namespace std;

struct Date {
    int d, m, y;
    Date (){};
    Date ( int _day, int _month, int _year )
    {
        d = _day;
        m = _month;
        y = _year;
    }

};

void getDay( Date &x)
{
    char ch;
    cin  >> x.d >> ch >> x.m >> ch >> x.y;
}

bool leapYear( int x )
{
    if ( x % 4==0 && x % 100 != 0 ) return 1;
    else return 0;
}

long getDateSum( Date y )
{
    int m[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    long distance = 0;

    // get Sum from 1/1/1 to y

    for ( int i=1; i< y.y; i++)
    {
        if ( leapYear(i) == 1 ) distance += 366;
        else distance += 365;
    }
    for ( int i=1; i< y.m; i++)
    {
        distance += m[i] ;
        if ( i==2 && leapYear (y.y) == 1 ) distance +=1;
    }
    distance += y.d;
    return distance;
}

long getDateDistance ( Date x, Date y )
{
    return getDateSum ( y ) - getDateSum ( x ) + 1;
}

string DayOfWeek( long d )
{
    int tmp = d % 7;
    switch (tmp)
    {
    case 0 : return "Thu Bay";
    case 1 : return "Chu Nhat";
    case 2 : return "Thu Hai";
    case 3 : return "Thu Ba";
    case 4 : return "Thu Tu";
    case 5 : return "Thu Nam";
    default : return "Thu Sau";

    }

}



int main()
{
    Date curDate = { 1, 1, 2000 }; // 1/1/2000 = Sat
    Date a;
    getDay( a );
    cout << getDateSum ( a ) << endl;
    long x = getDateDistance ( curDate, a);
    cout << DayOfWeek ( x );
    return 0;

}
