#include <stdio.h>



int max_sneklang_memory(int max_threads, int memeory_per_thread){
  return max_threads * memeory_per_thread;
}


void init_sneklang(int max_threads, int memeory_per_thread){
  printf("Initializing Sneklang\n");
  printf(" Max threads: %d\n", max_threads);
  printf(" Memory per thread: %d\n", memeory_per_thread);

  int max_memory = max_sneklang_memory(max_threads, memeory_per_thread);
  
  printf("Max memory: %d\n", max_memory);
}


int main() {
  init_sneklang(4,512);
  init_sneklang(8,1024);
  init_sneklang(16,2048);
  return 0;
}
