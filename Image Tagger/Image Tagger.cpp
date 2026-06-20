#include <iostream>
#include <string>
#include <filesystem>
#include <vector>

void LoadImagesFromFolder(std::string location);

struct imageFiles
{
    imageFiles();
};

int main()
{
    std::string folderLocation;
    std::cout << "Enter the path to the folder containing the images: " << '\n';
    std::getline(std::cin, folderLocation);

    LoadImagesFromFolder(folderLocation);
    return 0;
}

void LoadImagesFromFolder(std::string location)
{
    std::filesystem::directory_entry dir(location);

    if (dir.exists() && dir.is_directory())
    {
        for (std::filesystem::directory_entry path : std::filesystem::directory_iterator(dir))
        {
            if (path.is_regular_file())
            {
                std::cout << path.path().filename() << '\n';
            }
        }
    }
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