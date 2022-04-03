#include <iostream>
#include <fstream>
#include <cctype>

int main(int argc, char **argv)
{

    if (argc != 4)
    {
        std::cerr << "Error: Wrong count of argumants!" << std::endl;
        return (1);
    }
    std::string filename(argv[1]);
    std::string outFile = filename + ".replace";
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::ifstream ifs(argv[1]);
    if (ifs.is_open() == false)
    {
        std::cerr   <<"Error: " 
                    << filename 
                    << ": No such file or directory"
                    << std::endl;
        return (1);
    }
    std::string buff;
    std::ofstream ofs;
    
    ofs.open(outFile.c_str(), std::ios::app);
    while (getline(ifs, buff))
    {
        size_t index = 0;
        size_t len = buff.length();
        while (index < len)
        {
            if (!buff.compare(index, s1.length(), s1))
            {
                buff.erase(index, s1.length());
                buff.insert(index, s2);
                index = index - s1.length() + s2.length() + 1;
                len = len - s1.length() + s2.length();
                std::cout << index << " " << len << std::endl;
            }
            else
                ++index;
        }
        ofs << buff << std::endl;
        std::cout << buff <<std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}