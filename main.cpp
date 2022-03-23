#include <iostream>
#include<string>
#include<vector>
class Student{
private:
    std::string name;
    std::string surname;
    std::vector<float> grades;
    std::string albumNumber;
public:
    void setName(std::string n){
        name=n;
    }
    std::string getName(){
        return name;
    }
    void setSurName(std::string s){
      surname=s;
    };
    std::string getSurName(){
        return surname;
    }
    void setAlbumNumber(std::string x){
        if(x.size()>=5 && x.size()<=6){
            albumNumber=x;
        }
        else{
            std::cout<<"please enter valid album number"<<std::endl;
        }
    }
    std::string getAlbumNumber(){
        return albumNumber;
    }
    void displaySummary(){
        std::cout<<" name: "<< name <<std::endl;
        std::cout<<" surname: "<< surname <<std::endl;
        std::cout<<" Album Number:"<< albumNumber <<std::endl;
        for (auto value : grades) {
            std::cout << value<<std::endl;
        }
    }
    void addGrade(float g){
        if(g>=0 && g<=5){
            grades.push_back(g);
        }
        else{
            std::cout<<"Please enter valid grade"<<std::endl;
        }
    }
    int calcMeanGrade(){
        int sum=0;
        for (auto value : grades) {
            sum=sum+value;

        }
        return sum/grades.size();
    }
    void checkIfPassed(){
        int count=0;
        for (auto value : grades) {
            if(value<=2.0){
                count++;
            }
        }
        if (count>1){
            std::cout<<"you cannot pass the semester"<<std::endl;
        }
        else{
            std::cout<<"You have passed."<<std::endl;
        }
    }
};


int main()

{

    Student s1;
    s1.setAlbumNumber("150553");
    s1.setName("Deniz");
    s1.setSurName("Vardal");
    s1.addGrade(3.0);
    s1.addGrade(4.5);
    s1.addGrade(5.0);
    s1.displaySummary();
    s1.checkIfPassed();
    std::cout<<"your grade's mean is: "<< s1.calcMeanGrade()<<std::endl;

    Student s2;
    s2.setAlbumNumber("1505539");
    s2.setName("Bulent");
    s2.setSurName("Vardal");
    s2.addGrade(1.0);
    s2.addGrade(4.5);
    s2.addGrade(2.0);
    s2.displaySummary();
    s2.checkIfPassed();
    std::cout<<"your grade's mean is: "<< s1.calcMeanGrade()<<std::endl;
}
