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
	// Get the user-specified folder path
	std::string folderLocation;
	std::cout << "Enter the path to the folder containing the images: " << '\n';
	std::getline(std::cin, folderLocation);

	ReadImagesFromFolder(folderLocation);
	return 0;
}

// Read the images from the user specified folder
void ReadImagesFromFolder(std::string location)
{
	// Create a directory_entry class 'dir' and stores the string 'location'
	std::filesystem::directory_entry dir(location);

	// Check if dir exists and is a valid directory
	if (dir.exists() && dir.is_directory())
	{
		// Go to directory_entry path and loop through the contents with directory_iterator
		for (std::filesystem::directory_entry path : std::filesystem::directory_iterator(dir))
		{
			// Check if the contents are a file
			if (path.is_regular_file())
			{
				// Print the file names
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