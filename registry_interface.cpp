#include "registry_interface"


Registry::Registry() {

 cout<<"Constructer here to add "<<endl;
}

Registry::~Registry() {
	
	cout<<"Destructer here to delete "<<endl;
	
}
/*  Site_name getter setter  */
void Registry::setSite_name(string name)
{
	 site_name=name;
	
}
string Registry::getSite_name(void)
{
	return site_name;
}

/* Time_Zone getter setter*/
void Registry::setTime_zone(string time)
{
	time_zone=time;
}
string Registry::getSite_name(void)
{
	return time_zone;
}


/* Location getter setter */
void Registry::setlocation(string place)
{
	location=place;
}
string Registry::getlocation(void)
{
	return location;
}
/* Longitude and Latitude Getter setter */	
void Registry::setlongitude(float latitude_deg)
{
	latitude=latitude_deg
}
float Registry::getlongitude(void)
{
	return latitude;
}
	
void Registry::setlatitude(float longitude_deg)
{
	longitude=longitude_deg
}
float Registry::getlongitude(void)
{
	return longitude;
}
void Registry::setelevation(int elev)
{
	elevation_m=elev;
}
int Registry::getelevation(void)
{
	return elevation;
}

/* Tilt getter setter*/	
void Registry::settilt(int tilt_number)
{
	tilt=tilt_number;
}
int Registry::gettilt(void)
{
	return tilt;
}

/* Azimuth getter and setter */
void Registry::setazimuth(int azimuth_number)
{ 
	azimuth=azimuth_number;
}
int Registry::getazimuth(void)
{
	return azimuth;
}
/* Panel_power setter getter */	
void Registry::setpanel_power(double panel_number)
{
	panel_power=panel_number
}
double Registry::getpanel_power(void)
{
	return panel_power;
}

/* Battery capacity getter and setter  */
void Registry::setbattery_capacity_kwh(float battery_capacity_number)
{
    battery_capacity_kwh=battery_capacity_number
}
float Registry::getbattery_capacity_kwh(void)
{
	return battery_capacity_kwh;
}

/* Battery Max getter setter */
void Registry::setbattery_max_cap(float battery_max_number)
{
	battery_max_cap=battery_max_number;
}
float Registry::getbattery_max_number(void)
{
	return battery_max_cap;
}

/*Generator setter and getter */
void Registry::setgenerator_kw(float generator_kw_number)
{
    generator_kw=generator_kw_number

}
float Registry::getgenerator_kw(void)
{
	return generator_kw;
}

/* Rectifier setter and getter */
void Registry::setrectifier_kw(float rectifier_kw_number)
{
	rectifier_kw=rectifier_kw_number;
}
float Registry::getrectifier_kw(void)
{
	return rectifier_kw;
}

/* Inverter setter and getter */
void Registry::setinverter_kw(float inverter_kw_number)
{
	inverter_kw=inverter_kw_number;
}
float Registry::getinverter_kw(void)
{
	return inverter_kw;
}

/* Battery_floor getter setter  */

void Registry::setbattery_floor(float battery_floor_number)
{
	battery_floor=battery_floor_number;
}
float Registry::getbattery_floor(void)
{
	return battery_floor;
}

/* Battery ceiling getter setter */

void Registry::setbattery_ceiling(float battery_ceiling_number)
{
    battery_ceiling=battery_ceiling_number;
}
float Registry::getbattery_ceiling(void)
{
	return battery_ceiling;
}

/* Ref_target getter setter */
void Registry::setref_target(float ref_target_number)
{
	ref_target=ref_target_number;
}
float Registry::getref_target(void)
{
	return ref_target;
}

	
/* Param Getter Setter */	
void Registry::setparam(float param_number)
{
	param= param_number;
}
float Registry::getparam(void)
{
	return param;
}

/* Daily_mean_load getter setter */
void Registry::setdaily_mean_load_kwh(float daily_mean_load_number)
{
	daily_mean_load_kwh=daily_mean_load_number;
}
float Registry::getdaily_mean_load_kwh(void)
{
	return daily_mean_load_kwh;
}

/* efficiency getter setter */
void Registry::setefficiency(float efficiency_number)
{
	efficiency=efficiency_number;
}
float Registry::getefficiency(void)
{
	return efficiency;
}

/* Generator_Start_fre getter setter */

void Registry::setgen_start_freq(int gen_start_freq_number)
{
	gen_start_freq=gen_start_freq_number;
}
int Registry::getgen_start_freq(void)
{
	return gen_start_freq;
}	
/* Month getter setter*/
void Registry::setmonth(int month_number)
{
	month= month_number;
}
int Registry::getmonth(void)
{
    return month;
}	
/* date getter and setter */
void Registry::setdate(int date_number)
{
	date=date_number;
}
int Registry::getdate(void)
{
	return date;
}	
/* year getter setter*/
	
void Registry::setyear(int year_number)
{
	year=year_number;
}
int Registry::getyear(void)
{
	return year;
}



