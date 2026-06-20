#include <iostream>
#include <string>
#include <filesystem>
#include <vector>

struct imageFiles
{
    imageFiles();
    imageFiles(std::string path[]);
    imageFiles(std::string path[], std::string extension[]);
    imageFiles(std::string path[], std::string name[], std::string idTag[]);

};

int main()
{
    //Todo
}

imageFiles LoadImagesFromFolder(std::string path[], std::string extension[])
{
    /**Psuedo Code**
    SET path to user input
    IF path isn't empty
        LOOP through files until all of them are checked
            STORE image files in std::string path[FILE_COUNT]
            PRINT to extension[FILE_COUNT] to console
            PRINT to path[FILE_COUNT] count to console
            RETURN imageFiles();
    ELSE
        PRINT no matching files in path to console
        RETURN;
    ***************/
}