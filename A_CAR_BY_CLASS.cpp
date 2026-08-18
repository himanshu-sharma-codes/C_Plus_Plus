#include  <iostream>
#include  <string.h>
#include  <cstdlib>
using namespace std;

class car
{
   protected:
    int wheels , mirrors , engine ,head_light ,back_light;
	  public:
        inline void Basic_features(void);
          car(int x =4 , int y =2 , int u = 1 ,int w = 2 ) : wheels(x) , mirrors(y) , engine(u) , head_light(w) , back_light(w)
          {
          }
};

inline void car::Basic_features()
{
	      {
              cout<< "\n\n\nPROGRAM).\n\t<<AS YOU KNOW..>>\nTHE BASIC FEATURES OF A CAR:" <<endl;
              cout<< " \t  NO. OF WHEELS:\t\t"  << wheels <<endl;
              cout<< " \t  NO. OF MIRRORS:\t\t"  << mirrors <<endl;
              cout<< " \t  NO. OF ENGINE:\t\t"  << engine <<endl;
              cout<< " \t  NO. OF HEAD_LIGHTS:\t\t"  << head_light <<endl;
              cout<< " \t  NO. OF BACK_LIGHTS:\t\t"  << back_light <<endl;
          }
}

class MARUTI : virtual protected car
{
    string car_name , model_no , seats , body_type;
	  public:
	      MARUTI(string name = "MARUTI_NANO" , string model = "B1024SG" , string seats_no ="4_seater" , string type = "	4-door_hatchback") : car_name(name) , model_no(model) , seats(seats_no) , body_type(type)
	      {
          }
        inline  void show_details_maruti(void);
};

inline void MARUTI :: show_details_maruti()
{
           cout<< "\n\a\n----------------------------------------------------------------------" <<endl;
                      cout<< "PROGRAM).\n\tTHE SPECIFICATIONS OF MARUTI  CAR ARE...." <<endl;
                        cout<< "  \t  CAR NAME :\t\t" << car_name <<endl;
                        cout<< "  \t  MODEL NUMBER :\t" << model_no <<endl;
                        cout<< "  \t  NO OF SEATS :\t\t" << seats <<endl;
                        cout<< "  \t  BODY TYPE :\t" << body_type <<endl;
           cout<< "----------------------------------------------------------------------" <<endl << endl;
}

class BMW : virtual protected car
{
    string car_name , model_no , seats , body_type;
    public:
	      BMW(string name = "BMW M5" , string model = "LA56K77SHYA" , string seats_no ="4_seater" , string type = "SEDAN") : car_name(name) , model_no(model) , seats(seats_no) , body_type(type)
          {
          }
        inline void show_details_bmw(void);
};

inline void BMW :: show_details_bmw()
{
            cout<< "\n\a\n----------------------------------------------------------------------" <<endl;
                      cout<< "PROGRAM).\n\tTHE SPECIFICATIONS OF BMW CAR ARE...." <<endl;
                        cout<< "  \t  CAR NAME :\t\t" << car_name <<endl;
                        cout<< "  \t  MODEL NUMBER :\t" << model_no <<endl;
                        cout<< "  \t  NO OF SEATS :\t\t" << seats <<endl;
                        cout<< "  \t  BODY TYPE :\t\t" << body_type <<endl;
           cout<< "----------------------------------------------------------------------" <<endl << endl;
}

class SHOW_ROOM : protected BMW , protected MARUTI
{
	  public:
	      SHOW_ROOM()
          {
              string options;
              string user_name;
              
              cout<< "\n\aPLEASE ENTER  YOUR NAME:\t";
              cin >> user_name;
              
              system("cls");

              
              cout<< "PROGRAM).\n\tIN THE PRESENT TIME , " << endl << "\t\t" << user_name << "  SIR , WE HAVE TO 2 CARS MODELS:" << endl << endl;
              cout<< "\t\tMAY I SHOW YOU THEM:\t\"YES\" or \"NO\"" <<endl;

              label:
              cout << "\n\n\aYOU).\t";
              cin >> options;
                  
              if (options == "YES" || options == "yes"  || options == "Yes")
              {

                 system("cls");

                  car c;
                  BMW b;
                  MARUTI m;
                  
                  c.Basic_features();
                  b.show_details_bmw();
                  m.show_details_maruti();
              }
              
              else if (options == "NO" || options == "BREAK" || options == "no")
              {
                  cout<< "\n\nPROGRAM).\n\tOKAY !!! , NO WORRIES " <<endl << "\t\tHAVE A GOOD DAY ,, SIR!!" << endl << endl;
              }

              else
              {
                  cout<< "\n\nPROGRAM).\n\t" << user_name << "  SIR , CURRENTLY WE HAVE 2 MODELS...! " <<endl;
                  cout<< "\tDOES I SHOW YOU..???" <<endl;

                  goto label;
              }
          }
};



int main()
{
//    car simple;

//    maruti nano;

//      BMW  m5;

        SHOW_ROOM kalyanpur;

	return 0;
}
