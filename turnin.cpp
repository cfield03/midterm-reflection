

#include <iostream>
#include <string>

using namespace std;
void openingStatement(){ 
    cout << "You open your eyes, white light blinds your eyes.." << endl;
    cout << "\nThe thought of 'Where am I' floods your brain and suddendly a figure appears in front of you" << endl;
    cout <<"\nThe figure turns into a young woman whose lips wind up in a smirk, 'You're in my mind' she states." << endl;
    cout << "She continues, 'And you're stuck unless you can find a way out'" << endl;
    cout << "\n'But how...' before you can even finish the thought she cuts in, 'By waking me up'";
    cout << " 'You must look through my reflections and only then once you've looked through them all will you be able to escape'";
    cout << "'So do you want to play?: " << endl;
}

void welcomeExplanation(){
    int choice;
    cout << "Welcome to Caroline's mind, throughout this 'game' you will be able to hear her thoughts on HNR 4900";
    cout << "\nYour first decision is here, click the number at the beginning of the choice you'd like to go with and click enter to progress the game, you were asked if you wanted to play, so will you...";
    cout << "\n\n(1)Say Yes";
    cout << "\n(2)Say No" << endl;
    cin >> choice;
    if (choice == 1){
        cout << "Good, Reflection menu is now loading...";
    }
    else{
        cout << "How else will you leave? You do not have a choice, the Reflection menu is now loading...";
    }
}

int reflectionMenu(int choice){
    cout << "\nWelcome to the Reflection Menu" << endl << endl;
    cout << "(1)Ask about general thoughts on the class" << endl;
    cout << "(2)Ask about her Mission Statement" << endl;
    cout << "(3)Ask about the Mini-Manifestos" << endl;
    cout << "(4)Ask about the Lifewide Inventory, Annotations, and Connections" << endl;
    cout << "(5)Ask about the Life Stories" << endl;
    cout << "(6)Ask to leave" << endl;
    cin >> choice;
    return choice;
}
void choiceOne(){
    cout << "\n\nI’ve enjoyed being able to discuss openly my thoughts on the education I’ve received so far, its purpose, and my larger purpose in life. Granted, a lot of the discussion has made me feel like a failure, which is not something I want to think. I feel like I’m the only one in the class who is unhappy with my situation in life right now. It’s both refreshing and frustrating to hear my classmates discuss the importance of appreciating the moment because I like hearing that other people are happy, but I’m sad that I am not. I’ve enjoyed reflecting on my time at HPU, time allotted to discussing it has allowed me to more fully understand the experience I have had, the good and the bad both. I’ve enjoyed reading texts that challenge my beliefs, and then discussing them with the class. The discussions have easily been my favorite part of the class, they’re fulfilling and fun." << endl;
}

void choiceTwo(){
    cout << "\n\nWriting my mission statement was my favorite assignment that we’ve had so far. I actually enjoyed looking inward and thinking of what my purpose in life is. It helped that the assignment was short, but because it was short I was able to really focus on what I wanted to say. I’ve thought about the mission of my life often lately in the midst of my recent angst and all I want to be is happy. Getting there is a task but one that I know I can achieve, especially with the help of others in my life. " << endl;
}

void choiceThree(){
    cout << "\n\nSo, I’ve got conflicted feelings regarding the mini-manifestos. On one hand, my favorite thing I’ve written recently is in my first manifesto (EAT THE ORANGES) but on the other, sometimes I struggled to reach the word limit. I wish I could transpose my thoughts during class discussions onto the manifestos. I find it difficult to look back at what I said and thought during class and write it all down because in my mind I’ve already said everything, I just need to do the extra work and write it down. Writing the manifestos does not feel intellectually stimulating, it just feels like one extra homework assignment that I need to do. I do think they’re useful thought exercises to make us think about ourselves and our priorities and goals in life; it’s just hard to care when I have a hundred million other things I need to do. " 
    << endl;
}

void choiceFour(){
    cout << "\n\nCreating my lifewide inventory was really fun. It was enjoyable to look back on all the important things I’ve done in college and create a folder to store all of them. Selecting three to represent me was pretty easy, I just chose the artifacts that I’m proud of. Maybe I should have thought deeper about it and created a larger inventory, but I’m proud of what I came up with. The Connections, however, I found to be incredibly irritating. It felt like I was making up a story just to connect some rather unrelated papers, videos, and programs. It was fun to see what I came up with, but the actual writing of the connections was difficult, and I found it hard to give significance to projects." << endl;
}

void choiceFive(){
    cout << "\n\nI did really enjoy writing my continuous and discontinuous life stories. Writing a smooth, pretty version of my life with a strong underlying connection was surprisingly therapeutic. Unlike the connections, it felt like I was assigning deserved purpose to different aspects of my life. Right now my life feels like the exact opposite of continuous, it feels jumpy and unorganized, so it was nice to find a way to bring everything together. My discontinuous story was similarly fun to write, it was almost easier for me to write than the continuous story because there has been so much discontinuity in my life. Where my continuous story is an idealized version of my life, almost like a TV show, the discontinuous version felt like an accurate representation of my life. "
    << endl;
}

int choiceSix(int count){
    if (count >= 5){
        cout << "Thank you for taking the time to read my reflections.";
        cout << "Hopefully you enjoyed, if not oh well there's always next time" << endl;
        return 10;
    }
        
    else{
        cout << "You need to continue reading the reflections, you must read at";
        cout << " least all the reflections once." << endl;
        return 0;
    }
}

int main(){
    int choice = 0;
    int num;
    int count = 0;
    openingStatement();
    welcomeExplanation();
    while (num != 10){
        choice = reflectionMenu(choice);
        if(choice == 1){
            choiceOne();
            count++;
        }else if(choice == 2){
            choiceTwo();
            count++;
        }else if (choice == 3){
            choiceThree();
            count++;
        }else if (choice == 4){
            choiceFour();
            count++;
        }else if (choice == 5){
            choiceFive();
            count++;
        }else{
            num = choiceSix(count);
        }
    }
    return 0;
}
