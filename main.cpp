#include <iostream>
#include <pthread.h>


using namespace std;


  pthread_t t1;

  void *saySomething(void *arg){
    cout<<"Hello, from a POSIX Thread"<<endl;
    pthread_exit(NULL); 
  };


int main(){

  cout<<"Strating Thread"<<endl;

  pthread_create(&t1,NULL, &saySomething, NULL);

  pthread_exit(NULL);
}
