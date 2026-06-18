class Solution {
public:
    double angleClock(int hour, int minutes) {

        double hours=(hour+(minutes/60.0))*30;

        double mini=minutes*6;

        double diff=min(abs(hours-mini),360-abs(hours-mini));

        return diff;
        
    }
};