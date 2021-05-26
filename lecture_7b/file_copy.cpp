#include <iostream>
#include <fstream>

void printUsage();

const size_t BUFFER_SIZE{2048};

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printUsage();
        exit(-1);
    }

    char fileBuffer[BUFFER_SIZE];
    std::ifstream srcFile;
    std::ofstream dstFile;
    std::string srcPath{argv[1]};
    std::string dstPath{argv[2]};

    srcFile.open(srcPath);
    if(!srcFile)
    {
        std::cout << "there was a problem opening the file " << srcPath << std::endl;
        exit(-2);
    }
 
    dstFile.open(dstPath);
     if(!dstFile)
    {
        std::cout << "there was a problem opening the file " << dstPath << std::endl;
        srcFile.close();
        exit(-3);
    }

    while(srcFile && !srcFile.eof())
    {
        srcFile.read(fileBuffer, BUFFER_SIZE);
        dstFile.write(fileBuffer, srcFile.gcount());
    }

    return 0;
}

void printUsage()
{
    std::cout << "Invalid arguments!\nUsage\n";
    std::cout << "  file_copy src_path dst_path\n";
}