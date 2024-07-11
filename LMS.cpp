#include<bits/stdc++.h>
using namespace std;
class Book{
  public:
  int sNo;
  string bookName;
  string authorName;
  int bookqty;
  int bookQtyCopy;
  //input the values;
  Book()
  {
    cout<<"Enter the serial number of books:";
    cin>>this->sNo;
    cout<<endl;
    cout<<"Enter the book name:";
    getline(cin,this->bookName);
    cout<<endl;
    cout<<"Enter the author name:";
    getline(cin,this->authorName);
    cout<<endl;
    cout<<"Enter the quantity of books:";
    cin>>this->bookqty;
    cout<<endl;
  }
};
class Books:public Book{
  private:
  //array to store books
  Book theBooks[50];//array of objects
  int count;
  public:
  Books()
  {
    count=0;
  }
  //method to compare two book objects
  int compareBookObjects(const Book& b1,const Book& b2)
  {
    if(b1.bookName==b2.bookName)
    {
      cout<<"The given book already exists"<<endl;
      return 0;
    }
    if(b1.sNo==b2.sNo)

    {
      cout<<"Book with this serial number already exists"<<endl;
      return 0;
    }
    return 1;
  }
  //method to add a book 
  void addBook(const Book& b)
  {//check for each book whether the incoming book already exist among the given books or not if not add else return nothing
     for(int i=0;i<count;i++)
     {
      if(compareBookObjects(b,theBooks[i])==0)
      return;
     }
     if(count<50)//if no of present books count <50 you add to that one more book and increase the counter
     {
      theBooks[count]=b;
      count++;
     }
     else
     {
      cout<<"No space left to add more books"<<endl;
     }
  }
  //method to seach a book by its serial number
  //METHOD 3
  void searchBySno()
  {
    cout<<"\t\t\t\tSEARCH BY SERIAL NUMBER\n";
    int sno;
    cout<<"enter the serial number of the book:";
    cin>>sno;
    int flag=0;

  }
  
};
