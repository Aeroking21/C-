# Max and Min
int main(){
  int n, curmax,curmin;
 
    std::cout << "Please enter number: ";
    std::cin >> n;
 
    curmax = n;
  
    std::cout << "Maximum so far: " << curmax << std::endl;
 
    while(n != 0){
 
        std::cout << "Please enter number: ";
        std::cin >> n;
 
        if(n > curmax){
            curmax = n;
        }
        if(n<curmax){
          curmin =n;
        }
 
        std::cout << "Maximum so far: " << curmax << std::endl;
        std::cout << "Minimum so far: " << curmin << std::endl;
    }
    }

# Collatz Conjecture
int main(){
  int n,end;
  std::cout << "Enter a number: ";
  std::cin >> n >> end;

  for (int i=n ;i<=end;i++){
  
    int steps=0, curmax =0;
    curmax = n;

    while(n!=1){
      
      if((n%2==0)){
       n = n/2;
        if(n>curmax){
          curmax = n;
        }
      }

      else if((n%2==1)){
       n = (3*n) +1;
        if(n>curmax){
         curmax = n;
        }
      }
      steps++;
    }
    std::cout << "Steps taken for " <<i << " is: "<< steps << "\t";
   std::cout << "The Max number calculated: "<< curmax << std::endl;

  }
}



int main(){
  int n,end;
  std::cout << "Enter a range of numbers: ";
  std::cin >> n >> end;
  int lower = end/2;
  std::string ans;

  std::cout << "Is your number "<< lower <<"?: ";
  std::cin >> ans;
  int upper,median;
  

  while(ans!="correct"){
    if(ans=="higher"){
      median = (upper-lower)/2 + lower;
      std::cout << "Is your number "<< median <<"?: ";
    }
    if(ans=="lower"){
      median = (upper-lower)/2 + lower;
      std::cout << "Is your number "<< median <<"?: ";
    }

  }
  

}
