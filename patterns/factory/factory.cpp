#include <string>
#include <iostream> 
#include <vector>
#include <string>

class Document {
    virtual std::vector<std::string> createPages() {}

};


class Resume : public Document {

    std::vector<std::string> createPages() override {
        return {"A", "B", "C"};
    };
};

class Report : public Document {
    std::vector<std::string> createPages() override {
        return {"1", "3", "5"};
    };
};

class DocumentCreator{
    public:
        virtual std::unique_ptr<Document> create_document() {}

        virtual void operation() {
            auto a = this->create_document();
            *a.createPages()
        }

};

class ResumeFactory : public DocumentCreator{

    std::unique_ptr<Document> create_document() override {
        return std::make_unique<Resume>();
    }

};

class ReportFactory : public DocumentCreator {
    
    std::unique_ptr<Document> create_document() override {
        return std::make_unique<Report>();
    }
};



int main() {
    ResumeFactory resume_facttory;


}