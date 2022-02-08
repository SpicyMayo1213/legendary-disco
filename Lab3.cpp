//
//  main.cpp
//  Lab3
//
//  Created by Zachary Herring on 2/7/22.
//

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct student_info
{
    string name;
    
    double ID;
    
    double class_score;
    
};

void s_sort(student_info x[], int n);

int main()
{
    
    //declarations
    ifstream fin;
    double ID[30];
    
    student_info eachstud[30];
    for(int i=0; i<30; i++)
    {
        ID[i]=eachstud[i];
    }
    string filename;

    //user input
    //cout << "Enter filename: ";
    //cin >> filename;

    //open file and make sure it opened
    fin.open("/Users/zacharyherring/Desktop/score.txt");
    //fin.open(filename.c_str());
    
    if(fin.fail())
    {
        cout << "Error: input file open failed." << endl;
        exit(1);
    }

    int count = 0;

    //process a line at a time and store it in array
    while(fin.eof() == false)
    {
        // read into each element
        fin >> eachstud[count].name;
            
        fin >> eachstud[count].ID;
            
        fin >> eachstud[count].class_score;
            
        count++;
    }

    //call sort array funcion
    s_sort(eachstud[30].ID,30);
    //display the results of sorted scores
    for(int i=0; i<31; i++)
    {
        cout << eachstud[i].name << "\t" << eachstud[i].ID << "\t" << eachstud[i].class_score << endl;
        
    }
    
    fin.close();

    
    
    /*
     
    maybe unneeded
     
    for(int i=0; i<30; i++)
    {
        cout << "Enter student " << i << "'s name: ";
        cin >> eachstud[i].name;
        
        cout << "Enter student " << i << "'s ID: ";
        cin >> eachstud[i].ID;
        
        cout << "Enter student " << i << "'s number grade average: ";
        cin >> eachstud[i].class_score;
    }
    */
    
    return 0;
}
    

void s_sort(double x[], int n)
{
    
    
    int m; // keep the index of current smallest value
    double hold;

    for (int k=0; k<=n-2; k++)
    {
        m = k;
        for (int j=k+1; j <= n-1; j++)
        {
            if (x[j] < x[m])
                m = j;
        }
        hold = x[m];
        x[m] = x[k];
        x[k] = hold;
    }
    
    
    
    return;
}


