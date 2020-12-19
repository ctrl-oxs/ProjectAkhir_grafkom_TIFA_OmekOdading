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
	GLuint depthmapShader, shadowmapShader, stexture, stexture2, depthMapFBO, depthMap,
		RuangVBO, RuangVAO, RuangEBO, Ruang_texture,
		JendelaVBO, JendelaVAO, JendelaEBO, Jendela_texture,
		Kursi1VBO, Kursi1VAO, Kursi1EBO, Kursi1_texture,
		Kursi2VBO, Kursi2VAO, Kursi2EBO, Kursi2_texture,
		planeVBO, planeVAO, planeEBO, plane_texture,
		LemariVBO, LemariVAO, LemariEBO, LemariTexture,
		LemariAVBO, LemariAVAO, LemariAEBO, LemariATexture,
		RakVBO, RakVAO, RakEBO, RakTexture,
		RakAVBO, RakAVAO, RakAEBO, RakATexture,
		tvFrontVBO, tvFrontVAO, tvFrontEBO, tvFront_texture,
		tvSideVBO, tvSideVAO, tvSideEBO, tvSide_texture,
	tableVBO, tableVAO, tableEBO, table_texture;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildRuang();
	void DrawRuang(GLuint shader);
	void BuildJendela();
	void DrawJendela(GLuint shader);
	void DrawTexturedTable(GLuint shader);
	void BuildTextureTable();
	void BuildKursi1();
	void DrawKursi1(GLuint shader);
	void BuildKursi2();
	void DrawKursi2(GLuint shader);
	void BuildLemari();
	void DrawLemari(GLuint shader);
	void BuildLemariA();
	void DrawLemariA(GLuint shader);
	void BuildRak();
	void DrawRak(GLuint shader);
	void BuildRakA();
	void DrawRakA(GLuint shader);
	void BuildTvFront();
	void DrawTvFront(GLuint shader);
	void BuildTvSide();
	void DrawTvSide(GLuint shader);
	void BuildTexturedPlane();
	void DrawTexturedPlane(GLuint shader);
	void BuildDepthMap();
	void BuildShaders();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

