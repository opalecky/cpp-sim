//
// Created by adam on 7/20/2021.
//

#ifndef SIM_GRECTANGLE_HPP
#define SIM_GRECTANGLE_HPP

#include <SFML/Graphics.hpp>
#include "GVertex.hpp"
#include "GColor.hpp"

class GRectangle
{
private:
	float* m_Sizes = new float[2];
	GVertex m_Position;
	GVertex* m_Vertices = new GVertex[4];
	GColor m_Color;
public:
	GRectangle(const float& in_OriginX, const float& in_OriginY, const float& in_Width, const float& in_Height);
	GRectangle(const float& in_OriginX, const float& in_OriginY, const float& in_Width, const float& in_Height, const GColor& color);
	sf::VertexArray GetVertexArray();
	void Draw(sf::RenderWindow& in_Window);
	float GetHeight();
	void SetX(const float& in_NewX);
	float GetX();
	GColor GetColor();
};

#endif //SIM_GRECTANGLE_HPP
