#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
//using text_t = std::string;
//using number_t = int;
namespace first{
  int x = 1;
}
namespace second{
  int x = 2;
}
int main()
{
    //This is a comment
    /*
      This 
      is 
      a 
      multiline comment
    */

   // std::cout << "I like biryani" << '\n';
   // std::cout << "Its really good!" << '\n';
    

    // Variables
    /*
    //integer
    int age = 21;
    int year = 2026;
    int days = 7;

    //double 
    double price = 10.00;
    double gpa = 3.5;
    double temperature = 25.1;

    std::cout << price << '\n';

    //single character 
    char grade = 'A';
    char initial = 'C';
    std::cout << grade << '\n';

    //boolean (true or false)

    bool student= false;
    bool power = true;
    bool forSale = false;

    //Strings(objects that represent a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Biryani";
    std::cout << "Hello" << name << '\n';

    std::cout << "You are " << age << " years old";
    */
    //const
    /*
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    // Namespace
    using namespace first;    
    
    std::cout << second::x;
    */
    //pairlist_t pairlist;
    /*
    //type def
    text_t firstName = "Bro";
    number_t age = 21;

    std::cout << firstName << '\n';
    */
   // arithmetic operators
   int students = 20;
   //students++;
   //students -=1; 
   //students *=2;
   int remainder = students % 3;
   //std::cout << remainder;
   //type conversion
   int correct = 8;
   int questions = 10;
   double score = correct/(double)questions * 100;
   std::cout << score << "%";

   




    return 0;


}