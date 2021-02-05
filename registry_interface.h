#ifndef __REGISTRY_H__
#define __REGISTRY_H__

#include <vector>

class Registry {

    public:

         void setSite_name(string name);
         string getSite_name(void);
         
         void setTime_zone(string time);
         string getTime_zone(void);
         
         void setlocation(string place);
         string getlocation(void);
         
         void setlongitude(float latitude_deg);
         float getlongitude(void);
         
         void setlatitude(float longitude_deg);
         float get_latitude(void);
         
         void setelevation(int elev);
         int get_elevation(void);
         
         void settilt(int tilt_number);
         int gettilt(void);
         
         void setazimuth(int azimuth_number);
         int getazimuth(void);
         
         void setpanel_power(double panel_number);
         double getpanel_power(void);
         
         void setbattery_capacity_kwh(float battery_capacity_number);
         float getbattery_capacity_kwh(void);
         
         void setbattery_max_cap(float battery_max_number);
         float getbattery_max_cap(void);
         
         void setgenerator_kw(float generator_kw_number);
         float getgenerator_kw(void);
         
         void setrectifier_kw(float rectifier_kw_number);
         float getrectifier_kw(void);
         
         void setinverter_kw(float  inverter_kw_number);
         float getinverter_kw(void);
         
         void setbattery_floor(float battery_floor_number);
         float getbattery_floor(void);
         
         void setbattery_ceiling(float battery_ceiling_number);
         float getbattery_ceiling(void);
         
         void setref_target(float ref_target_number);
         float getref_target(void);
		 
		 void setparam(float param_number);
		 float getparam(void);
		 
		 void setdaily_mean_load_kwh(float daily_mean_load_number);
		 float getdaily_mean_load_kwh(void);
		 
		 void setefficiency(float efficiency_number);
		 float getefficiency(void);
		 
		 void setgen_start_freq(int gen_start_freq_number);
		 int getgen_start_freq(void);
		 
		 void setmonth(int month_number);
		 int getmonth(void);
		 
		 void setdate(int date_number);
		 int getdate(void);
		 
		 void setyear(int year_number);
		 int getyear(void);       
         
         
         
         
        // Constructor
        Registry();

        // Destructor
        ~Registry();

    private:   
    	                      
    	string site_name;
		string time_zone;
		string location;
		float longtitude;
		float latitude;
		int elevation_m;
		int tilt;
		int azimuth;
		double panel_power;           //array required
		float battery_capacity_kwh;   //array required 
		float battery_max_cap;   
		float generator_kw;
		float rectifier_kw;
		float inverter_kw;
		float battery_floor;
		float battery_ceiling;
		float ref_target;
		float param;
		float daily_mean_load_kwh;
		float efficiency;
		int gen_start_freq;
		int month;
		int date;
		int year;
			
};

#endif // __REGISTRY_H__
