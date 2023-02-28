#pragma once
#include <string>
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>

class Texture {
private:
	unsigned int m_ID;
	std::string filepath;
	unsigned char* m_localBuffer;
	int m_width, m_height, m_BPP;

public:
	Texture(const std::string& path);
	~Texture();

	void Bind() const;
	void Unbind() const;

	inline int getWidth() { return m_width; }
	inline int getHeight() { return m_height; }


};