#include <iostream> 
#include <string>
#include <mutex>

class Logger{


    public:

        static Logger getInstance() {
            std::lock_guard<std::mutex> lock(mutex_);
        }

        void std::string 

        Logger(Logger &const) = delete;
        void operator=(const Logger &) = delete;

    private:

        static Logger* instance;
        static std::mutex mutex_;

        Logger() {};


}