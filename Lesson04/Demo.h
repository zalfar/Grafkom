#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	GLuint lantaiVBO, lantaiVAO, lantaiEBO, lantaiTexture;
	GLuint tembokVBO, tembokVAO, tembokEBO, tembokTexture;
	GLuint kasurVBO, kasurVAO, kasurEBO, kasurTexture;
	GLuint mejaVBO, mejaVAO, mejaEBO, mejaTexture;
	GLuint kursiDudukanVBO, kursiDudukanVAO, kursiDudukanEBO, kursiDudukanTexture;
	GLuint kursiSandaranVBO, kursiSandaranVAO, kursiSandaranEBO, kursiSandaranTexture;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);

	//kasur
	void BuildKasur();
	void DrawKasur();

	//Meja
	void BuildMeja();
	void DrawMeja();

	//Kursi
	void BuildKursiDudukan();
	void DrawKursiDudukan();
	void BuildKursiSandaran();
	void DrawKursiSandaran();

	//tembok
	void Buildtembok();
	void Drawtembok();
	//lantai
	void BuildColoredPlane();
	void DrawColoredPlane();

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};