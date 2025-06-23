#include <iostream>
#include<string>
#include<memory>


using namespace std;

// Article class represents the content
class Article {
    string content;

public:
    Article(const string& text) : content(text) {
        cout << "[Article Created]: " << content << endl;
    }
    void edit()
    {
        content = "cppp is great";
    }
    void read() const {
        cout << "Reading Article: " << content << endl;
    }

    ~Article() {
        cout << "[Article Deleted]: " << content << endl;
    }
};

// Subscriber reads the shared article
class Subscriber {
    shared_ptr<Article> article;

public:
    Subscriber(shared_ptr<Article> a) : article(a) {
        cout << "[Subscriber Created]" << endl;
    }

   

    void readArticle() const {
        if (article)
            article->read();
        else
            cout << "No article to read." << endl;
    }

    ~Subscriber() {
        cout << "[Subscriber Deleted]" << endl;
    }
};

int main()
{
    shared_ptr<Article> article = make_shared<Article>("  ---- breaking news: cpp");

    {
        Subscriber s1(article);
        Subscriber s2(article);
        Subscriber s3(article);

        s1.readArticle();
        s2.readArticle();
        s3.readArticle();

        article->edit();

        s1.readArticle();
        s2.readArticle();
        s3.readArticle();

        cout << "Use count (shared_ptr): " << article.use_count() << endl;
    }

    article.reset();
    // All subscribers out of scope; article should be deleted
    cout << "After all subscribers are gone..." << endl;
    cout << "Use count (shared_ptr): " << article.use_count() << endl;


	return 0;
}
