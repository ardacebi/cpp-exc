#include <iostream>
#include <list>
#include <string> 
#include <iterator>
#include <initializer_list> // Add the missing include directive for the <initializer_list> header file
using namespace std;

class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main() {
     YouTubeChannel ytChannel;
     ytChannel.Name="flightsimTR";
     ytChannel.OwnerName="Oenen";
     ytChannel.SubscribersCount = 1000;
     ytChannel.PublishedVideoTitles = {"Microsoft Flight Simulator History", "Concorde"};

     cout << "Name: " << ytChannel.Name << endl; 
     cout << "OwnerName: " << ytChannel.OwnerName << endl; 
     cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl; 
     cout << "Videos: " << endl;
     for(string VideoTitle ytChannel.PublishedVideoTitles) { // Remove the colon (:) after the for loop variable declaration
        cout << VideoTitle << endl;
     }

    return 0;
}