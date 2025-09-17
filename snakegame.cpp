#include<iostream>
#include<conio.h>
#include<windows.h>
#include<vector>
using namespace std;
/*game variables that are needed are listed below */
const int width = 80;//console width 
const int height = 20;//console height
int x,y;//sanp ka sirr
int fruitx , fruity;//sanp ka khana
vector<int>tailx;//sanp ki body
vector<int>taily;
enum snakesdirection{STOP = 0 ,LEFT,RIGHT,UP,DOWN};//button 
int taillen;//sanp ka size
int playerscore;//score
bool gameover;//khelkhatam
snakesdirection sdir;// ye jo upar enum hai uska object
 
void gameinitialization(){
   gameover = false ; //shuruwat me to false hi rhega bhai
   x = width/2;//starting sanp ka sirr dot centre me hona na
   y = height/2;//same upar wali chiz height ke context me
   fruitx = rand()%2;//rand ye function hai random integer value return krta hai 
   fruity = rand()%2;//ise hamesha alg alg values assign hogi aur alg alg jagah fruits pop up honge
   playerscore = 0;//bina khele score kaise dedu 
   sdir = STOP;// starting me sanp ek hi jagah rehne ko hona na
}


/*ab initialize to krdiya lekin console me load bhi krna hoga uske liye neeche wala function */

void gamerendering(string playersname){
   system("cls");//bhai kuch khas nai bs clear screen ke liye hai
   for(int i=0;i<width+2;i++){
      cout<<"-";
   }
   cout<<endl;
   for(int i=0;i<height;i++){
      for(int j=0;j<width;j++){
         if(j==0 || j==width){
            cout<<"|";
         }
         if(j==x && i==y){
            cout<<"o";
         }
         else if(j==fruitx && i==fruity){
            cout<<"#";
         }
         else{
            bool prtail = false;
            for (int k = 0; k < taillen; k++) {
                    if (tailx[k] == j
                        && taily[k] == i) {
                        cout << "o";
                        prtail = true;
                    }
                 }
                 if(!prtail){
                  cout<<" ";
                 }
         }
      }
      cout<<endl;
   }
   for(int i=0;i<width+2;i++){
      cout<<"-";
   }
   cout<<playersname<<"s'score"<<playerscore<<endl;
}

