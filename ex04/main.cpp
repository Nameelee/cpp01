#include <iostream>
#include <fstream>
#include <string>

std::string replaceString(std::string subject, std::string word, std::string replace)
{
    if (word.empty())
        return (subject);
    
    std::string result = "";
    size_t  startPos = 0;
    size_t  foundPos = subject.find(word, startPos);//find 'word' from 'subject' and beginning point is startPos

    while (foundPos != std::string::npos)
    {
        result += subject.substr(startPos, foundPos - startPos);//Copy and paste before search
        result += replace;//paste the word you found
        startPos = foundPos + word.length();
        foundPos = subject.find(word, startPos);//to use this, first it needs to find the 'word' 
    }
    result += subject.substr(startPos);//paste all the sentence 
    return (result);
}

/**
 * *************std::ifstream fileForOpen(infile.c_str());
 * it opens file. In C++ just declaring variable run functions.
 * Because in C++ class is not just a chunk of data. It is a robot with function.
 * In the constructor has code that opens a file
 */

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: Can't run the program" << std::endl;
        std::cerr << "How to use: ./loser <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string infile = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream fileForOpen(infile.c_str());//it opens file. 
    //first, we need to convert input into .c_str
    if (fileForOpen.is_open() == false)
    {
        std::cerr << "Error: You can't open file, monsieur -> " << infile << std::endl;
        fileForOpen.close();
        return (1);
    }

    std::string outfile = infile + ".replace";
    std::ofstream fileForWrite(outfile.c_str());
    if (fileForWrite.is_open() == false)
    {
        std::cerr << "Error: Failed at making a file, monsier -> " << outfile << std::endl;
        fileForWrite.close();
        return (1);
    }

    //reading file
    std::string content;
    std::getline(fileForOpen, content, '\0');// adding '\0' makes it can read file in one time
    //getline: read letters from input stream then save in the string variable
    std::string replaceContent = replaceString(content, s1, s2);
    fileForWrite << replaceContent; 
    //save replaceContent(string) in fileForWrite(file)

    fileForOpen.close();
    fileForWrite.close();

    return (0);
}