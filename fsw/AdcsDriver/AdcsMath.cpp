#include <fsw/AdcsDriver/AdcsMath.hpp>
#include <cmath>

namespace fsw {

    extern const double GRAVITATIONAL_CONSTANT = 6.67408e-11;
    extern const double MASS_OF_EARTH = 5.9722e24;

    extern const float SUNLIT_AREA = 0.2*0.3;
    extern const double SPEED_OF_LIGHT = 2.99792458e8;
    extern const float UNITLESS_REFLECTANCE_FACTOR = 0.6;
    extern const int SOLAR_CONSTANT = 1367;

    extern const double PI = 3.14159265358979323846;

    // returns julian date including fraction
    float getJulianDate() {
        float julianDate = 0;

        return julianDate;
    }
    

    float getJulianDate(int year, int month, int day, int hour, int min, int sec) {
        return (367.0 * year - floor( ( 7 * ( year + floor( (month + 9 ) / 12.0) ) ) * 0.25)) + 
                    ((sec + min * 60 + hour * 3600.0)/86400.0);
    }

    float getGreenwichSiderealTime(int julianDate) {
        float julianCenturies = (julianDate - 2451545.0 ) / 36525.0;
        double gst = - 6.2e-6 * pow(julianCenturies,3) + 0.093104 * pow(julianCenturies,2)
               + (876600.0 * 3600.0 + 8640184.812866) * julianCenturies + 67310.54841;

        gst = (gst*PI/180.0) % (2*PI);

        if(gst < 0.0)
            gst += (2*PI);

        return gst;
        // could code possibly generate
    }
}