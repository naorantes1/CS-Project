#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
int main(){
  int grade;
  cout << "Enter your exam grade: ";
  cin >> grade;
  cout << "your grade is: " << grade << endl;
  
  if (grade >= 90){
    cout << "you got an A" << endl;
  }
  if (grade < 90 && grade > 50){
    cout << "you got an average score" << endl;
  }
  if (grade <= 50){
    cout << "you failed" << endl;
  }
  
}
*/

/*
int main() {
  double x = 9, y = 2;
  double number = pow(y,x);
cout << x << " to the power of " << y << " is " << number;
}
*/


  

 /*
int main() {
  string forecast;
  double percantage;

  cout << "enter the weather forecast: (sunny, windy, or rainy): ";

cin >> forecast;

  //first case if the forecast is rainy 
  if (forecast == "rainy")
  {
    cout << " what is the chance of rain percantage: ";
    cin >> percantage;
  } else {
    percantage = 0;
  }

  //if the user entered sunny
  if(forecast == "sunny")
  {
    cout << " PLEASE BRING UR SUNGLASSES YOU DONT WANNA DAMAGE UR EYES" << endl;
  }

  if (forecast == "windy")
  {
    cout << " ITS GONNA BE FREEZING MAKE SURE TO BRING UR JACKET " << endl;
  }

  //if the user entered rainy 
  if (forecast == "rainy")
  {
    cout << " what is the chance of rain percantage: ";
  if (percantage > 50)
  {
    cout << " BRING AN UMBRELLA ITS GONNA BE RAINING CATS AND DOGS LOLL" << endl;
}
if (percantage <=50) 
{
  cout << "LOW CHANCE BUTS ITS POSSIBLE MANEEE JUST BRING YOUR UMBRELLA YOU LAZY FUCK" << endl;
}
  
  }  
 




 return 0;
}
*/



/*
int main()
{ 
  string password;
  
  cout << "enter your password:";
    cin >> password;

  if (password == "JAMES1021"){
    cout << "ermmm CORRECT YAYAYAYAYAY YOURE INNN YIPPE GET UR ASS IN NOW BOY" << endl;
  } 
else{
  cout << "ERM WRONG PASSWORD BOZO TRY AGAIN BUDDY" << endl;
}
return 0;
}
*/

/*
int main(){

  string name;
  cout << "Enter your name: ";
  cin >> name;
  
  int Steps;
  cout << "Enter the number of steps you have taken: ";
  cin >> Steps;
  if (Steps >= 10000){
    cout << "Great job on walking today." << endl;
  } else{
    cout << "Go outside and get your steps in." << endl;
  }
 
  double sleep;
  cout<< "enter the ammount of hours of sleep you got: ";
  cin >> sleep;
  if (sleep >= 8){
  cout <<"Good job you got enough sleep" << endl;
  }else{
  cout << "You need to get more sleep" << endl;
  }
  string favExercise;
  cout << "enter your favorite exercise: ";
  cin >> favExercise;
    

  char gender;
  cout << "enter your gender: (m or f): ";
  cin >> gender;
   
  if (gender == 'm'){
    cout << "Mr."<< name << ",  you walked: " << Steps << " ,hours slept: " << sleep <<", You're favorite exercise is: "<< favExercise << endl;
    }else{
      if (gender == 'f')
    cout<< "Ms." << name << "you walked:" << Steps << "Ms. youve slept:" << sleep << " you're favorite exercise is: " << favExercise << endl;
    }


  return 0;
}
*/

int main(){
string name;
cout << "Enter your name: ";
cin >> name;

int tickets;
cout << "Enter the numbers of tickets you want to buy: ";
cin >> tickets;

int age;   
cout << "Enter your age: ";
cin >> age;

double price;
cout << "Enter price of ticket: ";
cin >> price;
if (age < 18){
  cout << "You are eligible for 10% discount " << endl;
  price = (price * tickets) * 0.90;
     }
  
  else if (age > 60){
  cout << "You are eligible for a 15% discount " << endl;
  price = (price * tickets ) * 0.85; 
  
}
  else
    price = price * tickets;

  cout << "Your new total is: " << price << endl;

  
string genre;
cout << "Enter the genre of the movie: (action, comedy) ";
cin >> genre;
    if (genre == "comedy"){
      cout <<"ENJOY YOU'RE MOVIE MATE :0 ";
    }else{
     if (genre == "action")  
      cout << "Have fun watching the action movie. " ;
    }

return 0;
}
  
