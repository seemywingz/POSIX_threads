#include <iostream>
#include <pthread.h>


using namespace std;


  pthread_t t1;

  void *saySomething(void *arg){
    
    cout<<(char *)arg<<endl;
    pthread_exit(NULL); 
  };


int main(){

  cout<<"Strating Thread"<<endl;

  pthread_create(&t1,NULL, &saySomething, (void*)"hello World");

  pthread_exit(NULL);
}
