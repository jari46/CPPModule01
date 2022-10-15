#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc == 4) {
		/* 1. read the whole content from the file to the string
			by using the position indicator(pos.) */
		std::string filename = argv[1];
		std::ifstream in(filename);
		if (in) {
			in.seekg(0, std::ios::end);//move pos. to the end of the file
			int filesize = in.tellg();//index of the pos.
			std::string buf;
			buf.resize(filesize);//resize the buf size same as the file size
			in.seekg(0, std::ios::beg);//move pos. to the begin of the file
			in.read(&buf[0], filesize);

			/* 2. change every s1 to s2 in the string */
			if (!buf.empty()) {
				std::string s1 = argv[2];
				std::string s2 = argv[3];

				std::size_t pos = 0;
				while (true) {
					pos = buf.find(s1, pos);//try to find s1
					if (pos == std::string::npos)//(find function returns npos if it fail)
						break ;
					buf = buf.substr(0, pos) + s2 + buf.substr(pos + s1.length());
					pos = pos + s2.length();//pass some character to delete s2
				}

				/* 3. put the changed content from the string to the new file */
				std::ofstream out(filename + ".replace");
				if (out) {
					out << buf;
				}

	/* 0. Error handling */
				else {
					std::cout << "Error: ofstream creation failed" << std::endl;
					return 1;
				}
			}
			else {
				std::cout << "Error: empty file" << std::endl;
				return 1;
			}
		}
		else {
			std::cout << "Error: ifstream creation failed(no such file or no authorization or extra)" << std::endl;
			return 1;
		}
	}
	else {
		std::cout << "Error: 4 arguments are needed" << std::endl;
		return 1;
	}
	return 0;
}
