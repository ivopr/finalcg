#pragma once
#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <string>
#include <cstdlib>
#include <iostream>
#include <filesystem>

class FileSystem {
public:
	static std::string getPath(const std::string& path);
	typedef std::string (*Builder) (const std::string& path);

private:
	static std::string const & getRoot();
	static Builder getPathBuilder();
	static std::string getPathRelativeRoot(const std::string& path);
	static std::string getPathRelativeBinary(const std::string& path);
};

// FILESYSTEM_H
#endif