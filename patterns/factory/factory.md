roblem Statement: Document Generation System

You are tasked with developing a document generation system for a company. The system needs to create different types of documents such as resumes and reports. Each document has a specific structure, and the goal is to use the Factory Method pattern to abstract the document creation process.

Document Class:

Define an abstract base class Document with a pure virtual function createPages().
The createPages() function should return a vector of strings representing the pages of the document.
Resume and Report Classes:

Implement two derived classes: Resume and Report, each inheriting from the Document class.
Implement the createPages() function in each derived class to create and return specific pages for a resume and a report, respectively.
DocumentFactory Class:

Create an abstract base class DocumentFactory with a pure virtual method createDocument().
The createDocument() method should return a pointer to a dynamically allocated instance of a Document.
Concrete Factories:

Implement two concrete factories: ResumeFactory and ReportFactory, each inheriting from the DocumentFactory class.
Implement the createDocument() method in each concrete factory to create and return an instance of the corresponding document (Resume or Report).
Client Code:

In the main function, demonstrate the use of the abstract Document Factory and concrete factories to create instances of different documents and display their pages.
By applying the Factory Method pattern in this context, you should be able to easily extend the system to support additional document types in the future without modifying the existing client code.