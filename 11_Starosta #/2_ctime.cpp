#include <iostream>
#include <cmath>

using namespace std;

int WeekDay (int d, int m, int y) {
    int LeapYears = (int) y/ 4, resWeekDay;
    long a = (y - LeapYears)*365 + LeapYears * 366;
    
    if(m >= 2) a += 31;
    if(m >= 3 && (int)y/4 == y/4) a += 29;
    else if(m >= 3) a += 28;
    if(m >= 4) a += 31;
    if(m >= 5) a += 30;
    if(m >= 6) a += 31;
    if(m >= 7) a += 30;
    if(m >= 8) a += 31;
    if(m >= 9) a += 31;
    if(m >= 10) a += 30;
    if(m >= 11) a += 31;
    if(m == 12) a += 30;
    
    a += d;
    resWeekDay = (a - 2) % 7;
    
    resWeekDay = (a - 2) % 7;
    switch (resWeekDay) {
    	case 0: return 6; break;
    	case 1: return 7; break;
    	case 2: return 1; break;
    	case 3: return 2; break;
    	case 4: return 3; break;
    	case 5: return 4; break;
    	case 6: return 5; break;
    	default: return 0;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int d, m, y;
	
    do {
    	cin >> d >> m >> y;
    	cout << WeekDay(d, m, y) << endl;
	} while (d != 0 && m != 0 && y != 0);
}
