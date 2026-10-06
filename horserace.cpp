#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Horse{
	public:
		int position;
		Horse(){
			position = 0;
		}//end horse
	void move(){
		position += rand() %2;
	}// end move
	
	bool isWinner(){
		return position >= 15;
	}//end winner
};//close horse
 int main(){
	 srand(time(0));
	 Horse horse1
	
	 Horse horse2;

	Horse horse3;
while(!hores1.isWinner() && !horse2.isWinner() && !horse3.isWinner()){
cout << "Enter to continue";
cin.get();


horse1.move();
horse2.move();
horse3.move();

cout << "\n";
cout << "Horse 1: ";
for(int i = 0; i < horse1.posiiton; i++){
	cout << " ";
}//end horse1 for
cout << "H/n";

cout << "Horse 2: ";
for(int i = 0; i < horse2.posiiton; i++){
        cout << " ";
}//end horse2 for
cout << "H/n";

cout << "Horse 3: ";
for(int i = 0; i < horse3.posiiton; i++){
        cout << " ";
}//end horse3 for
cout << "H/n";

cout << "---------------\n";
}//end while 
 if(horse1.isWinner()){
	 cout << "Horse 1 wins!\n";
 }//end if
   if(horse2.isWinner()){
         cout << "Horse 2 wins!\n";
 }//end if
   if(horse3.isWinner()){
         cout << "Horse 3 wins!\n";
 }//end if
  return 0;
  }//end main
