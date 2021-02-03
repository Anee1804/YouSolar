#include<iostream>
#include<string>
#define Num_of_battery 3  // Total no of battery 
#define Panel_multiplier 2
using namespace std;


class site_details{
	                  // components used for edison
	public:
		
		string site_name;
		string time_zone;
		string location;
		float longtitude;
		float latitude;
		int elevation_m;
		int tilt;
		int azimuth;
		double panel_power;
		float battery_capacity_kwh;
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

int main()
{
      
       int battery_array[Num_of_battery];
       int panel_power_array[Panel_multiplier];

       for(int i=0;i<Num_of_battery;i++)    // to carry out the loop when the value of battery 
       {
      	cout<<"Enter battery value:"<<endl;
      	cin>>battery_array[i];
      	
	   }
	
	   for(int j=0;j<Panel_multiplier;j++)
	   {
	   	 cout<<"Enter panel_mul value:"<<endl;
      	 cin>>battery_array[j];
	   }
        
	site_details site_Info1;    // Here object1 =site_Bigsur (This shows following information belongs to Bigsur) //Hard -coding
	site_Info1.site_name="BigSur";
	site_Info1.location="USA,CA";
	site_Info1.time_zone="PST";
	site_Info1. longtitude=36.35141;
	site_Info1.latitude=-121.898593;
	site_Info1.elevation_m=113 ;  // # 370 ft
	site_Info1.tilt=20;
	site_Info1.azimuth=170;
	site_Info1.panel_power= 8 ;
	site_Info1.battery_capacity_kwh=5.1;
	site_Info1.battery_max_cap=4;
	site_Info1.generator_kw=5.5;
	site_Info1.rectifier_kw=3;
	site_Info1.inverter_kw=15;
	site_Info1.battery_floor=0.2;
	site_Info1.battery_ceiling=0.8;
	site_Info1.ref_target=0.7;
	site_Info1.param=0.2;
	site_Info1.daily_mean_load_kwh=5.75;
	site_Info1.efficiency=0.9;
	site_Info1.gen_start_freq=14;
	site_Info1.month=12;
	site_Info1.date=1;
	site_Info1.year=2020;
	
	
	
	  cout <<"Site_name ="<< site_Info1.site_name <<  "\n" <<"Location ="<<site_Info1.location<<  "\n" <<"Time_zone="<<site_Info1.time_zone<<" \n"
	  <<"Longitude="<<site_Info1.longtitude<<"\n" <<"Latitude="<<site_Info1.latitude<<"\n "<<"Elevation="<<site_Info1.elevation_m <<" \n "
	  <<"Tilt="<<site_Info1.tilt<<"\n "<<"Azimuth=" <<site_Info1.azimuth<<" \n "<<"Panel_power=" <<site_Info1.panel_power<<" \n"
	 <<"Battery_capacity_kwh=" <<site_Info1.battery_capacity_kwh<<"	\n "<<"Battery_max_capacity="<<site_Info1.battery_max_cap<<"\n"
	 <<"Generator="<<site_Info1.generator_kw<<" \n"<<"Rectifier="<<site_Info1.rectifier_kw<<"\n "
	<<"Inverter=" << site_Info1.inverter_kw<<" \n"<<"Battery_floor="<<site_Info1.battery_floor<<"\n "<<"Battery_ceiling="
	<<site_Info1.battery_ceiling<<"	\n "<<"Ref_target=" <<site_Info1.ref_target <<"	\n "<<"Param=" <<site_Info1.param<<"\n "
	 <<"Daily_mean_load=" << site_Info1.daily_mean_load_kwh<< " \n"<<"Efficiency=" <<site_Info1.efficiency<<"\n "
	 <<"Gen_start_freq="<<site_Info1.gen_start_freq<<"\n "<<"Month=" <<site_Info1.month<<" \n"<<"Date="<<site_Info1.date<<"	\n"
	  <<"Year="<<site_Info1.year <<"\n";
	  
	  
	
	
	
}
