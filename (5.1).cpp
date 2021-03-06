# Sum of Powers
int power(int x, int n);

int main(){
  int base,po;
  std::cout << "Enter base and power: ";
  std::cin >> base >> po;
  power(base,po);
}

int power(int x, int n){
  int counter =0;

  for(int i=1 ;i<=n;i++){
    counter = counter + pow(x,i);
  }
  std::cout << "The total is: " << counter << std::endl;
  return counter;
}

# Exponent with negative
double power(int x, int n);

int main(){
  int base,po;
  std::cout << "Enter base and power: ";
  std::cin >> base >> po;
  power(base,po);
}

double power(int x, int n){

  double counter=1;

  for(int i=1 ;i<=abs(n);i++){
    counter = (counter) * x;
  }

  if(n<0){
    counter = 1/counter;
  }
  std::cout << "The total is: " << counter << std::endl;
  return counter;
}

# Swapping Text
void swap(std::string& x, std::string& n);

int main(){
  std::string c1,c2;
  std::cout << "Enter characters to be swapped: ";
  std::cin >> c1 >> c2;
  swap(c1,c2);
  std::cout << c1 << ":";
  std::cout << c2 << std::endl;

}

void swap(std::string& x, std::string& n){
  std::string temp;
  temp = x;
  x=n;
  n=temp;
}
