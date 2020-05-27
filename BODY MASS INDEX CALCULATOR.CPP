#include <windows.h>
#include <iostream>
#include <fstream>
using namespace std;
int author();

class bmical{
float a,b;
float x,y;
string name;
public:
    bmical(){
    a=0;
    b=0;
}
    void bmi();
    void print();

}bmicalculator;

class exercise
{
int n;
string name;
public:

    void exe();
    void exprint();
}exer;

class diet{
int n,g,age;
float h,w,x,p,z,o;
string name;
public:
    diet()
    {
        h=0;
        w=0;

    }
    void diets();
    void diprint();
    void cal();
}dietss;
void bmical::bmi()
{
    int n;
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<"     ****************************     "<<endl;
    cout<<"           BODY MASS INDEX"<<endl;
    cout<<"            BMI CALCULATOR"<<endl;
    cout<<"     ****************************     "<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<" ENTER YOUR NAME : ";
    cin>>name;
    cout<<""<<endl<<endl;
    cout<<" ENTER YOUR HEIGHT (in meter) : ";
    cin>>a;
    cout<<""<<endl<<endl;
    cout<<" ENTER YOUR WEIGHT (in kg) : ";
    cin>>b;
    cout<<""<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);


    x=a*a;
    y=b/x;

    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<"     ****************************     "<<endl;
    cout<<"           BODY MASS INDEX"<<endl;
    cout<<"            BMI CALCULATOR"<<endl;
    cout<<"     ****************************     "<<endl<<endl;
    if(y>18.5&&y<25)
    {

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        Sleep(1000);
    cout<<"       !! congratulations !!"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        Sleep(1000);
    cout<<" "<<name<<" you are HEALTHY"<<endl<<endl;
    cout<<" YOUR B.M.I IS : ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<y<<endl<<endl;

    }
    else  if(y>25)
    {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    Sleep(1000);
    cout<<"       !! be alert !!"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    Sleep(1000);
    cout<<name<<" you are overweight"<<endl<<endl;
    cout<<" YOUR B.M.I IS : ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<y<<endl<<endl;
    }
    else  if(y<18.5)
    {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    Sleep(1000);
    cout<<"       !! try to improve yourself !!"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    Sleep(1000);
    cout<<name<<" you are under-weight"<<endl<<endl;
    cout<<" YOUR B.M.I IS : ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<y<<endl<<endl;
    }

    cout<<" PRESS [1] to save REPORT!!"<<endl<<" PRESS [2] to go on MENU"<<endl<<" PRESS any key & hit ENTER to EXIT!!!"<<endl;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
     cout<<" ENTER YOUR INPUT HERE : ";
    cin>>n;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);


/*   switch (n)
    {
    case 1:
        bmicalculator.print();
        break;
    case 2:
        author();

    default:
        exit(0);
    }                           */
}
void bmical::print()
    {
        ofstream file;
        file.open("BMI_REPORT.txt");
        file<<"*****HEALTH ADVISOR*****"<<endl;
        file<<"  BMI REPORT"<<endl<<endl;
        file<<" NAME : "<<name<<endl;
        file<<" HEIGHT : "<<a<<" meters"<<endl;
        file<<" WEIGHT : "<<b<<" kg"<<endl;
        file<<" B.M.I is : "<<y<<endl<<endl;
        file<<" THANK you!!!"<<endl;


    }

void exercise::exe()
{

    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<"     ****************************     "<<endl;
    cout<<"           KNOW YOUR"<<endl;
    cout<<"           EXERCISE"<<endl;
    cout<<"     ****************************     "<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<" ENTER YOUR NAME : ";
    cin>>name;
    cout<<""<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<" SELECT ANY CATEGORY FROM THE BELOW :-"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<" Aerobic (Endurance) Exercise   PRESS [1]"<<endl;
    cout<<" Strength exercises             PRESS [2]"<<endl;
    cout<<" Flexibility exercises          PRESS [3]"<<endl;
    cout<<" Balance exercises              PRESS [4]"<<endl<<endl;
     cout<<" ENTER YOUR INPUT HERE : ";
    cin>>n;
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<"     ****************************     "<<endl;
    cout<<"           YOUR"<<endl;
    cout<<"         EXERCISES"<<endl;
    cout<<"     ****************************     "<<endl<<endl;
    switch (n)
    {
    case 1:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<" hey "<<name<<" Aerobic (Endurance) Exercise are : "<<endl<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<<" A brisk walk"<<endl<<" Jogging"<<endl<<" Climbing the stairs"<<endl<<" Playing tennis"<<endl<<" Doing yard work like raking, digging and gardening"<<endl;
        break;
    case 2:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<" hey "<<name<<" Strength exercises are : "<<endl<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<<" Lifting free weights"<<endl<<" Using resistance machines at the gym"<<endl<<" Using resistance bands to leverage your own body weight in building strength"<<endl;
        break;
    case 3:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<" hey "<<name<<" Flexibility exercises are : "<<endl<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<<" Stretching various parts of the body"<<endl<<" Doing yoga"<<endl;
        break;
    case 4:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<" hey "<<name<<" Balance exercises are : "<<endl<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<<" Heel-to-toe walking"<<endl<<" Standing on one foot"<<endl<<" Practicing tai chi poses"<<endl;
        break;
    default:
        exit(0);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<""<<endl;
    cout<<" PRESS [1] to save REPORT!!"<<endl<<" PRESS [2] to go on MENU"<<endl<<" PRESS any key & hit ENTER to EXIT!!!"<<endl;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
     cout<<" ENTER YOUR INPUT HERE : ";
    cin>>n;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);

    switch (n)
    {
    case 1:
        exer.exprint();
        break;
    case 2:
        author();

    default:
        exit(0);
    }
}

void exercise::exprint()
    {
        ofstream file;
        file.open("EXERCISE_REPORT.txt");
        file<<"*****HEALTH ADVISOR*****"<<endl;
        file<<"  EXERCISE REPORT"<<endl<<endl;
        file<<" NAME : "<<name<<endl;
        file<<" VARIOUS EXERCISES ARE : - "<<endl<<endl;
        file<<" Aerobic (Endurance) Exercise"<<endl<<"Aerobic exercises increase your breathing and heart rate and are the main component of overall fitness programs"<<endl;
        file<<" A brisk walk"<<endl<<" Jogging"<<endl<<" Climbing the stairs"<<endl<<"Playing tennis"<<endl<<" Doing yard work like raking, digging and gardening"<<endl<<endl;

        file<<" Strength exercises"<<endl;
        file<<" Lifting free weights"<<endl<<" Using resistance machines at the gym"<<endl<<" Using resistance bands to leverage your own body weight in building strength"<<endl;
        file<<" Flexibility exercises"<<endl<<" Stretching various parts of the body"<<endl<<" Doing yoga"<<endl<<endl;
        file<<" Balance exercises"<<endl<<" Heel-to-toe walking"<<endl<<" Standing on one foot"<<endl<<" Practicing tai chi poses"<<endl<<endl;
        file<<" YOU PREFFERED EXERCISE NO : "<<n<<endl<<endl;
        file<<" THANK you!!!"<<endl;


    }

void diet::diets(){
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<"     ****************************     "<<endl;
    cout<<"           SELECT YOUR"<<endl;
    cout<<"            DIET PLAN"<<endl;
    cout<<"     ****************************     "<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<" ENTER YOUR NAME : ";
    cin>>name;
    cout<<""<<endl<<endl;
    cout<<" ENTER YOUR HEIGHT (in inches) : ";
    cin>>h;
    cout<<""<<endl<<endl;
    cout<<" ENTER YOUR WEIGHT (in pound) : ";
    cin>>w;
    cout<<""<<endl<<endl;
    cout<<" ENTER YOUR AGE    (in YEARS) : ";
    cin>>age;
    cout<<""<<endl<<endl;
    cout<<" SELECT GENDER : MEN[1]  WOMEN[2]"<<endl<<endl;
    cout<<" ENTER YOUR INPUT HERE : ";
    cin>>g;
    system("cls");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    dietss.cal();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<" SELECT ANY CATEGORY FROM THE BELOW :-"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<" Low-calorie diets               PRESS [1]"<<endl;
    cout<<" Low-carbohydrate diets          PRESS [2]"<<endl;
    cout<<" Low-fat diets                   PRESS [3]"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<" ENTER YOUR INPUT HERE : ";
    cin>>n;
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<"     ****************************     "<<endl;
    cout<<"           YOUR"<<endl;
    cout<<"         DIET PLAN"<<endl;
    cout<<"     ****************************     "<<endl<<endl;

    dietss.cal();
    switch (n)
    {
    case 1:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"    hey "<<name<<" Low-calorie diets are : "<<endl<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<<" Broccoli        cal(31/cup)"<<endl;
        cout<<" Broth           cal(31/cup)"<<endl;
        cout<<" Cabbage         cal(22/cup)"<<endl;
        cout<<" Coffeecal       cal(00/cup)"<<endl;
        cout<<" Cauliflower     cal(21/cup)"<<endl;
        break;
    case 2:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"    hey "<<name<<" Low-carbohydrate diets are : "<<endl<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<<" Meat:        Beef, lamb, pork, chicken and others. Grass-fed is best"<<endl;
        cout<<" Fish:        Salmon, trout, haddock and many others. Wild-caught fish is best"<<endl;
        cout<<" Vegetables:  Spinach, broccoli, cauliflower, carrots and many others."<<endl;
        cout<<" Fruits:      Apples, oranges, pears, blueberries, strawberries."<<endl;
        break;
    case 3:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"    hey "<<name<<" Low-fat diets are : "<<endl<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<<" Dried beans and peas"<<endl<<" Low-fat or skim milk"<<endl<<" low-fat cheese"<<endl<<" Oatmeal"<<endl<<" Cup of low-sodium vegetable soup"<<endl;
        break;

    default:
        exit(0);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<""<<endl;
    cout<<" PRESS [1] to save REPORT!!"<<endl<<" PRESS [2] to go on MENU"<<endl<<" PRESS any key & hit ENTER to EXIT!!!"<<endl;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
     cout<<" ENTER YOUR INPUT HERE : ";
    cin>>n;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);

    switch (n)
    {
    case 1:
        dietss.diprint();
        break;
    case 2:
        author();

    default:
        exit(0);
    }


}

void diet::cal(){
    switch(g)
    {
    case 1:

        z= 66 + ( 6.23 * w) + ( 12.7 * h ) - ( 6.8 * age );
        o = z*1.2;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<" YOUR CALORIE REQUIREMENT IS : "<<o<<endl<<endl;
        break;
    case 2:

        x= 655 + ( 4.35 * w ) + ( 4.7 * h) - ( 4.7 * age );
        p=x*1.2;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<" YOUR CALORIE REQUIREMENT IS : "<<p<<endl<<endl;
        break;
    }

}

void diet::diprint(){
    ofstream file;
        file.open("DIET_REPORT.txt");
        file<<"*****HEALTH ADVISOR*****"<<endl;
        file<<"  DIET REPORT"<<endl<<endl;
        file<<" NAME   : "<<name<<endl;
        file<<" HEIGHT : "<<h<<" inches"<<endl;
        file<<" WEIGHT : "<<w<<" pounds"<<endl;
        file<<" AGE IS : "<<age<<" years"<<endl;
        file<<" YOUR CALORIE REQUIREMENT IS : "<<o<<p<<" per day"<<endl<<endl;
        file<<" THANK you!!!"<<endl;

}

int main()
{
   int n;

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
   cout << "              WELCOME" << endl<<endl;
   cout<<"     ****************************     "<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
   cout<<"       YOUR  ";
   cout<<"FITNESS  ";
   cout<<"ADVISOR"<<endl;
   cout<<"     ****************************     "<<endl<<endl;
   cout<<"        CSE 202 PROJECT WORK"<<endl;
   cout<<"   LOVELY PROFESSIONAL UNIVERSITY"<<endl<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
   cout<<" CREATED BY:"<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
   cout<<" NAME:     JASMEET SINGH SAINI"<<endl<<" REGD. NO: 11710381"<<endl<<" SECTION:  K17UK"<<endl<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
   cout<<" ASSIGNED BY:"<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
   cout<<" MISS KAMALDEEP KAUR"<<endl<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
   cout<<"PRESS <1> TO CONTINUE : ";
   cin>>n;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);

   switch(n)
   {
   case 1:
    author();
    break;

   default:
    cout<<"please enter valid number";
   }
return 0;
}

int author()
{
   system("cls");
     int n;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
   cout << "              WELCOME" <<endl;
   cout<<"     ****************************     "<<endl<<endl;

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
   cout<<"   KNOW YOUR B.M.I      : PRESS[1]"<<endl;
   cout<<"   KNOW YOUR DIET       : PRESS[2]"<<endl;
   cout<<"   KNOW YOUR EXERCISES  : PRESS[3] "<<endl<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
   cout<<" PRESS [5] TO EXIT"<<endl;
   cout<<" ENTER YOUR INPUT HERE : ";
   cin>>n;

   switch(n)
   {
   case 1:
      bmicalculator.bmi();
       break;

   case 2:
       dietss.diets();
       break;
   case 3:
       exer.exe();
       break;
   }
   /*case 4:
       advisor();
       break;
   case 5:
       exit(0);
       break;
   default:
    cout<<"please enter valid option"<<endl;
  }
      */

}
