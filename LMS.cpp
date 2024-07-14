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
    cout<<"S.Nn\t\tName\t\tAuthor\t\tAvailable Qty\t\tTotal Qty"<<endl;
    for(int i=0;i<count;i++)
    {
      if(sno==theBooks[i].sNo)
      {
        cout<< theBooks[i].sNo <<"\t\t"
                    << theBooks[i].bookName + "\t\t"
                    << theBooks[i].authorName + "\t\t"
                    << theBooks[i].bookQtyCopy + "\t\t"
                    <<theBooks[i].bookqty;
                    cout<<endl;
        flag++;
        return;
      }
    }
    if(flag==0)
    {
      cout<<"No Book for Serial no."<<sno<<"found\n";
    }
  }
  //method 4
  //to search by author name
  void searchByAuthorName() {
        cout << "\t\t\t\tSEARCH BY AUTHOR'S NAME" << endl;
        cin.ignore(); // Clear input buffer

        cout << "Enter Author Name: ";
        string authorName;
        getline(cin, authorName);

        int flag = 0;

        cout << "\nS.No\t\tName\t\tAuthor\t\tAvailable Qty\t\tTotal Qty" << endl;
        for (int i = 0; i < count; i++) {
            if (authorName == theBooks[i].authorName) {
                cout << theBooks[i].sNo << "\t\t"
                     << theBooks[i].bookName << "\t\t"
                     << theBooks[i].authorName << "\t\t"
                     << theBooks[i].bookQtyCopy << "\t\t"
                     << theBooks[i].bookqty << endl;
                flag++;
            }
        }

        if (flag == 0)
            cout << "No Books of " << authorName << " Found." << endl;
    }
    //method 5 display the books
    void showAllBooks() {
         cout<<"\t\t\t\tSHOWING ALL BOOKS\n";
         cout<<
            "S.No\t\tName\t\tAuthor\t\tAvailable Qty\t\tTotal Qty";
 
        for (int i = 0; i < count; i++) {
 
            cout<<
                theBooks[i].sNo <<"\t\t"
                <<theBooks[i].bookName << "\t\t"
                << theBooks[i].authorName << "\t\t"
                << theBooks[i].bookQtyCopy <<"\t\t"
                << theBooks[i].bookqty<<endl;
        }
    }
//method-6
//to edit the book 
void upgradeBookQty()
{
  cout<< "\t\t\t\tUPGRADE QUANTITY OF A BOOK\n";
  cout<<"Enter Serial No of Book:";
  cin>>sNo;
   for (int i = 0; i < count; i++) {
 
            if (sNo == theBooks[i].sNo) {
 
                // Display message
                cout<<
                    "Enter No of Books to be Added:";
                   int addingQty;
                cin>> addingQty ;
                theBooks[i].bookqty += addingQty;
                theBooks[i].bookQtyCopy += addingQty;
 
               return ;
            }
}
}
// Method 7
    // To create menu
     void dispMenu()
    {
 
        // Displaying menu
        cout<<
            "----------------------------------------------------------------------------------------------------------\n";
        cout<<"Press 1 to Add new Book.\n";
        cout<<"Press 0 to Exit Application.\n";
        cout<<
            "Press 2 to Upgrade Quantity of a Book.\n";
        cout<<"Press 3 to Search a Book.\n";
        cout<<"Press 4 to Show All Books.\n";
        cout<<"Press 5 to Register Student.\n";
       cout<<
            "Press 6 to Show All Registered Students.\n";
        cout<<"Press 7 to Check Out Book. \n";
        cout<<"Press 8 to Check In Book\n";
        cout<<
            "-------------------------------------------------------------------------------------------------------\n";
    }
 
};
