#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Error: 4 arguments are needed" << std::endl;
		return 1;
	}
	
	std::string filename = argv[1];
	std::ifstream in(filename);
	if (in) {
		////go to the end of the file
		in.seekg(0, std::ios::end);

		////get filesize
		int filesize = in.tellg();

		////resize buf
		std::string buf;
		buf.resize(filesize);

		////go to the begin of the file
		in.seekg(0, std::ios::beg);

		////keep all file contents in string buf
		in.read(&buf[0], filesize);

		in.close();

		if (buf.empty()) {
			std::cout << "Error: empty file" << std::endl;
			return 1;
		}

		//2. change s1 to s2
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		std::size_t pos = 0;
		while (true) {
			pos = buf.find(s1, pos);
			if (pos == std::string::npos)
				break ;
			buf = buf.substr(0, pos) + s2 + buf.substr(pos + s1.length());
			pos = pos + s1.length();
		}

		//3. put buf to out
		std::ofstream out(filename + ".replace");
		if (out) {
			out << buf;
		}
		else {
			std::cout << "Error: ofstream creation failed" << std::endl;
			return 1;
		}
	}
	else {
		std::cout << "Error: ifstream creation failed" << std::endl;
		return 1;
	}
	return 0;
}