#include <string>
#include <iostream> 
#include <vector>
#include <string>

class Document {
    public:
        virtual std::vector<std::string> createPages() {}

};


class Resume : public Document {
    public:
        std::vector<std::string> createPages() override {
            return {"A", "B", "C"};
        };
};

class Report : public Document {
    public:
        std::vector<std::string> createPages() override {
            return {"1", "3", "5"};
        };
};

class DocumentCreator{
    public:
        virtual std::unique_ptr<Document> create_document() {}

        virtual std::vector<std::string> operation() {
            auto doc = this->create_document();
            return  doc->createPages();
        }

};

class ResumeFactory : public DocumentCreator{
    public:
        std::unique_ptr<Document> create_document() override {
            std::cout<< "Created a Resume" << std::endl;
            return std::make_unique<Resume>();
        }

};

class ReportFactory : public DocumentCreator {
    public:
        std::unique_ptr<Document> create_document() override {
            std::cout<< "Created a Report" << std::endl;
            return std::make_unique<Report>();
        }
};



int main() {
    ResumeFactory resume_factory;
    ReportFactory report_factory;

    // resume_factory.create_document();
    // report_factory.create_document();

    auto resume_pages = resume_factory.operation();
    auto report_pages = report_factory.operation();


    for (const auto& number : resume_pages) {
        std::cout << number << " ";
    };

    for (const auto& number : report_pages) {
        std::cout << number << " ";
    };

}