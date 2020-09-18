#include <iostream>
#include <list>
#include <thread>
std::list<int> g_Data;
const int SIZE = 50000000;

void Download(){
    std::cout << "[Downloader] Started Download" << std::endl;
    for (int i = 0;i<SIZE;++i){
        g_Data.push_back(i);
    }
    std::cout << "[Downloader] Finished Download" << std::endl;
}
int main(){
    std::cout << "[main]User started an operation" << std::endl;
    // Download(); // without threading

    std::thread download_thread(Download); // pass in name which is the function address.
    std::cout << "[main]User started another operation" << std::endl;
    // Detaching the thread so that the main can terminate and also the thread live and 
    // not die. 
    download_thread.detach();

    // A joinable thread can be detached, but once detached, cannot be join again.

    //use joinable() if you want to check if a thread is joinable or not.
    if(download_thread.joinable()){
        download_thread.join();
    }
    
    system("read -p 'Press Enter to continue...' var");
    return 0;
}

