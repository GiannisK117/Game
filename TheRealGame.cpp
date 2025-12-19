#include <iostream>
using namespace std;
int restart(int firstchoice,int secondchoice,int thirdchoice,int fourthchoice,int fifthchoice,int sixthchoice);
void sixthlevel(int firstchoice,int secondchoice,int thirdchoice,int fourthchoice,int fifthchoice,int sixthchoice)
{
	int a=0;
	cout<<"You hear some civilians scream and spot the dragon sitting behind a big burning house! You shout about it at the men and everyone is ready! Good work!"<<endl;
	cout <<"The King orders everyone to use their shields to block the dragon's fire and move on closer to kill it!"<<endl;
	cout <<"Press 1 to run towards the dragon with the rest of the soldiers!"<<endl;
	cout <<"Press 2 to drop your shield to run faster at the big house as the men distract the dragon!"<<endl;
	cout <<"Press 3 to drop your shield, shout at the dragon and throw your sword at the dragon's head!"<<endl;
	cin >>sixthchoice;
	switch(sixthchoice){
		case 1: {
			cout << "You see the dragon kill many and you don't stand a chance in the open. You get eaten by the dargon... X_X"<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a= restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 2:{
			cout << "You climbed at the top of the house and jumped off with your sword to stab it's head as the dragon was about to start flying. The dragon drops dead, the King names you Dragon Slayer and you are rewarded handsomely. Congrats!!! If you wanna play again press 1 if not press 2."<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 3:{
		    cout << "The dragon sees you and deflects the incoming sword with its head and attacks specifically you resulting your death... X_X"<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		default: {
		sixthlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
		break;
	}
	}
}
void fifthlevel(int firstchoice,int secondchoice,int thirdchoice,int fourthchoice,int fifthchoice,int sixthchoice)
 {
 	int a=0;
 	cout<<"You did the right thing! You are being equipped with better armor, a new shiny sword and a big shield."<<endl;
 	cout <<"The King leads his men out of the castle to the outskirts of the town! We arrived but there's no sign of the dragon.. What happens next?"<<endl;
	cout <<"Press 1 to do nothing and wait for the King's command.'"<<endl;
	cout <<"Press 2 to run away from the army because at the last second you are got scared of the dragon."<<endl;
	cout <<"Press 3 to try and find the dragon through the smoke and burnt down houses"<<endl;
	cin >>fifthchoice;
	switch(fifthchoice){
		case 1:{
			cout << "The dragon was hiding behind a burned house and the soldiers were not ready for it's stealthy attack and you, the soldiers and the King became it's dinner... X_X"<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 2:{
			cout << "You are seen by everyone running away from the area, and the King could not tolerate a deserter. You got shot by an arrow X_X"<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 3:{
		sixthlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		default: {
		fifthlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
		break;
	}
	}
}
void fourthlevel(int firstchoice,int secondchoice,int thirdchoice,int fourthchoice,int fifthchoice,int sixthchoice)
{
	int a=0;
	cout<<"Well done, The King rewards you for being brave and for wanting to fight along the soldiers he tells you that what is destroying the outskirts of the town is a dragon and with 110 men preparing to fight, one more would guarranty the dragons death! "<<endl;
	cout <<"What do you do next? The threat is a dragon could 111 men kill it?"<<endl;
	cout <<"Press 1 to change your mind and leave from the castle as far as your feet can take you."<<endl;
	cout <<"Press 2 to accept the reward and insist on fighting the dragon!"<<endl;
	cout <<"Press 3 to tell the King that don't believe him and that you will fight the so called dragon yourself!!!"<<endl;
	cin >>fourthchoice;
	switch(fourthchoice){
		case 1:{
			cout << "You leave the castle and as you run on the road you hear screams behind and as you look behind you, you see people run from the castle, towards the road you are taking!!! The dragon sees the big crowd and burns everything on the road... X_X"<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 2:{
			fifthlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 3:{
		    cout << "You are given armor, a sword and a shield. The King's disappointed by you and you go out alone to fight the dragon. You do not return... X_X"<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		default: {
		fourthlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
		break;
	}
	}
}
void thirdlevel(int firstchoice,int secondchoice,int thirdchoice,int fourthchoice,int fifthchoice,int sixthchoice)
{
	int a=0;
	cout<<"Good job! The guards take you to the King and you tell him what you saw."<<endl;
	cout <<"The King already knew about the town's outskirts' and he is preparing a force to deal with the threat!"<<endl;
	cout <<"Press 1 to request from the King to fight with the soldiers!"<<endl;
	cout <<"Press 2 to do nothing and leave from the castle to have your own adventure."<<endl;
	cout<<"Press 3 to call the King a fool for not protecting the village."<<endl;
	cin >>thirdchoice;
	switch(thirdchoice){
		case 1:{
		fourthlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 2:{
			cout << "You left from the castle and by now you're too far and as you're on your way, 10 bandits appear and you are taken as a slave X_X"<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 3:{
		    cout << "The King is furious at you and he tells you he didn't have time to bring and prepare a force to defeat the dragon. You are imprisoned because you cursed the King."<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		default: {
		thirdlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
		break;
	}
	}
}
void secondlevel(int firstchoice,int secondchoice,int thirdchoice,int fourthchoice,int fifthchoice,int sixthchoice)
{
	int a=0;
	cout<<"Looks like you made it! You gaze at the big castle that sits ontop of a hill. The guards see you and open the gates!"<<endl;
	cout <<"You've reached the castle! What do you do next?"<<endl;
	cout <<"Press 1 to enter the castle without talking to anyone to steal supplies, weapons and armor."<<endl;
	cout <<"Press 2 to call the guards and tell them  that the town's burning!"<<endl;
	cout <<"Press 3 to curse everyone in the castle for not helping the town. "<<endl;
	cin >>secondchoice;
	switch(secondchoice){
		case 1:{
			cout << "You got caught and the guards imprison you for trying to steal weapons."<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 2:{
			thirdlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 3:{
		    cout << "You are imprisoned for cursing everyone there.."<<endl;
			cout << "Press 1 to try again, 2 to abandon"<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		default: {
		secondlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
		break;
	}
	}
}
void firstlevel(int firstchoice,int secondchoice,int thirdchoice,int fourthchoice,int fifthchoice,int sixthchoice)
{   int a=0;
	cout <<"You wake up in your guard tower, alone, and you hear screams in a nearby village that seems to be burning. What do you do?" <<endl;
	cout << "Press 1 to do a patrol in the nearby forest."<<endl;
	cout << "Press 2 to walk to the burning town.."<<endl;
	cout << "Press 3 to run to the castle!"<<endl;
	cin >> firstchoice;
	switch(firstchoice){
		case 1:{
			cout << "You reached forest and you see some bandits camping. You are caught and they kill you... X_X "<<endl;
			cout << "Press 1 to try again or 2 to abandon."<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		case 2:{
			cout << "You arrived to the burning town and you see something crawling out of a big ruined house... Its a DRAGON and all that's left from you is ashes... X_X"<<endl;
			cout << "Press 1 to try again, 2 to abandon."<<endl;
			a=restart(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
				break;
		}
		case 3:{
		secondlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
			break;
		}
		default: {
		firstlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
		break;
	}
	}
}
int main(int argc, char** argv) {
int firstchoice=0, secondchoice=0, thirdchoice=0,fourthchoice=0,fifthchoice=0,sixthchoice=0;
	firstlevel(firstchoice,secondchoice,thirdchoice,fourthchoice,fifthchoice,sixthchoice);
	return 0;
}
int restart(int firstchoice, int secondchoice, int thirdchoice,int fourthchoice,int fifthchoice,int sixthchoice) {
	int b=0;
	int x;
	cin >> x;
	switch (x) {
	case 1: {
		cout << "What a bad ending... Here we go again!" << endl;
		firstlevel(firstchoice, secondchoice, thirdchoice,fourthchoice,fifthchoice,sixthchoice);
		break;
	}
	default: {
	    cout << "Thank you for playing!" << endl;
		break;
	}
	}
	return b;
}


