#include <iostream>

#include <GLFW/glfw3.h>
//#include <glad/glad.h>

int main(){

	if(!glfwInit()){
		std::cout << "ERROR001" << std::endl;
	}

	glfwTerminate();

}
