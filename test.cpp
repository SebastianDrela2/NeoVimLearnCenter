// TERRIBLY FORMATTED TEST FILE - SHOULD BE FIXED BY CLANG-FORMAT
#include <iostream>#include <vector>
#include <string> 
  namespace TestNamespace{
class FormatterTest{public:
FormatterTest(){std::cout<<"Constructor\n";}
void testMethod(int x){if(x>10){std::cout<<"Large number\n";}else 
{std::cout<<"Small number\n";}}}; template<typename T>
void templateFunction(T value){for(int i=0;i<5;i++){std::cout<<value<<"\n";}}}


int main(){using namespace TestNamespace;
    FormatterTest test; test.testMethod(15); std::vector<std::string> items={"apple","banana","cherry"}; for(const auto& item:items)
{std::cout<<item<<"\n";} templateFunction(3.14159); auto lambda=[](int a,int b)->int{return a+b;}; std::cout<<"Lambda result: "<<lambda(2,3)<<"\n"; if(true||false||true){std::cout<<"Complex condition\n";}return 0;}
