#include <iostream>
#include <list>
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
     for(string VideoTitle: ytChannel.PublishedVideoTitles) {
        cout << VideoTitle << endl;
     }

     YouTubeChannel ytChannel2;
     ytChannel2.Name="flightsimTR2";
     ytChannel2.OwnerName="Oenen2";
     ytChannel2.SubscribersCount = 2000;
     ytChannel2.PublishedVideoTitles = {"Microsoft Flight Simulator History", "Concorde"};

     cout << "Name: " << ytChannel2.Name << endl; 
     cout << "OwnerName: " << ytChannel2.OwnerName << endl; 
     cout << "SubscribersCount: " << ytChannel2.SubscribersCount << endl; 
     cout << "Videos: " << endl;
     for(string VideoTitle: ytChannel2.PublishedVideoTitles) {
        cout << VideoTitle << endl;
     }

    return 0;
}