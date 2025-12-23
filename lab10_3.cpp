#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    int count = 0;
    float sum = 0, x=0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        x += pow(atof(textline.c_str()),2);
        count++;
    }
    source.close();
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt((x/count)- pow((sum/count),2));
}