#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: Invalid count of arguments" << std::endl;
        return (1);
    }
    std::string filename(argv[1]);
    std::ifstream ifs(argv[1]);
    if (ifs.is_open() == false)
    {
        std::cerr << "Error: " << filename << ": No such file or directory" << std::endl;
        return (1);
    }
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    int s1_len = s1.length();
    int s2_len = s2.length();
    if (s1_len == 0 || s2_len == 0)
    {
        std::cerr << "Error: invalid args" << std::endl;
        return (1);
    }
    size_t  result;
    size_t  iterator = 0;
    std::string outFile;
    while (((result = filename.find(s1, iterator)) != std::string::npos))
    {

        if (iterator != result)
            outFile.append(filename.substr(iterator, result - iterator));
        outFile.append(s2);
        iterator = result + s1_len;
    }
    if (result == std::string::npos && outFile.empty())
    {
        std::cerr << "Error: There is no '" << s1 << "' in file name" << std::endl;
        return (1);
    }
    std::ofstream ofs(outFile);
    std::string str;
    ifs >> str;
    ofs << str;
    return (0);
}