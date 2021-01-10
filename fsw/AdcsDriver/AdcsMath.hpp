#ifndef AdcsMath_HPP
#define AdcsMath_HPP

#include "fsw/AdcsDriver/AdcsMath.hpp"

namespace fsw {

  class AdcsMath {

    public:

        // ----------------------------------------------------------------------
        // Construction, initialization, and destruction
        // ----------------------------------------------------------------------

        //! Construct object AdcsMath
        //!
        AdcsMath();

        //! Destroy object AdcsMath
        //!
        ~AdcsMath();

        // Constants
        
        extern const double GRAVITATIONAL_CONSTANT;
        extern const double MASS_OF_EARTH;

        extern const float SUNLIT_AREA;
        extern const double SPEED_OF_LIGHT;
        extern const float UNITLESS_REFLECTANCE_FACTOR;
        extern const int SOLAR_CONSTANT;

        extern const double PI;

        // Julian Date
        float getJulianDate(); 
        float getJulianDate(int year, int month, int day, int hour, int min, int sec); 

        float getGreenwichSiderealTime(int julianDate); // Greenwich Sidereal Time

    private:

    };

} // end namespace AdcsMath

#endif