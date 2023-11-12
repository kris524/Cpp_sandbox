#include <string>
#include <iostream> 



class DocumentCreator{
    public:
        virtual Document create_document() {}

        virtual void operation() {
            
        }

}

class ResumeFactory : public DocumentCreator{

    Document create_document() override {
        return Resume;
    }

}

class ReportFactory : public DocumentCreator {
    
    Document create_document() override {
        return Report;
    }
}


class Document{

}

class Resume : public Document {

}

class Report : public Document {

}