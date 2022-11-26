#pragma once
#include "Component.h"
class SkyBoxComponent : public Component
{
public:
	SkyBoxComponent(int updateOrder = 100);

	~SkyBoxComponent();

	virtual void initialize() override;

	void renderSkyBox();

protected:

	bool loadCubeMap();

	void buildSkyboxShaderProgram();

	bool buildSkyBoxMesh();

	//std::vector<string> faces;

	std::vector<string> faces
	{
		"Assets/Cube Map/space1/px.jpg",
		"Assets/Cube Map/space1/nx.jpg",
		"Assets/Cube Map/space1/py.jpg",
		"Assets/Cube Map/space1/ny.jpg",
		"Assets/Cube Map/space1/nz.jpg",
		"Assets/Cube Map/space1/pz.jpg"
	};

	GLuint skyboxTexture = 0;

	unsigned int VAO = 0, VBO = 0;

	static GLuint skyboxShaderProgram;
	
	static bool areSkyboxShadersBuilt;

};

