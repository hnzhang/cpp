#include<iostream>
#include<vector>
int  fabonacii(int i)
{
  if(i == 0){
   return 0; 
  }
  if(i == 1){
    return 1;
  }
  int temp1 = 0, temp2 = 1;
  int ret = 0; 
  for(int v = 2; v <= i; v++)
  {
    ret = temp1 + temp2;

    temp1 = temp2; 
    temp2 = ret;
  }
  return ret;
}

int main()
{
  int a = 1, b = 3;
  int c = a + b;
  std::string info("Hello world");
  std::cout << c << info << std::endl;
  std::vector<int> values{1,4,6,7};
  for(const int& v:values)
  {
    std::cout <<"fabnacii for " << v << " is " << fabonacii(v) << std::endl ;
  }
  std::cout << std::endl;
  return 0;
}