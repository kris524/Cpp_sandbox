#include <iostream> 
#include <string>
#include <mutex>
#include <ctime>

class Logger{

    private:

        static Logger* instance;
        static std::mutex mutex_;

        Logger() {};

    public:

        static Logger* getInstance() {
            std::lock_guard<std::mutex> lock(mutex_);
            if (!instance){
                instance = new Logger();
            }
            return instance;
        }

        void logInfo(const std::string& message ){
            std::time_t now = time(0);
            std::tm* localtime  = std::localtime(&now);  
            std::cout << asctime(localtime) << "INFO: " << message << std::endl;
        }

        void logError(const std::string& message ){
            std::time_t now = time(0);
            std::tm* localtime  = std::localtime(&now);  
            std::cout << asctime(localtime) << "ERROR: " << message << std::endl;
        }



        Logger(Logger &other) = delete;
        void operator=(const Logger &) = delete;

};

Logger* Logger::instance{nullptr};
std::mutex Logger::mutex_;


int main(){
    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();

    if (logger1 == logger2){
        printf("True\n");
    }
    else{
        printf("False\n");

    }

    logger1->logInfo("OMG price is cheap");

    logger2->logError("This is bad");

    // return 0;
}