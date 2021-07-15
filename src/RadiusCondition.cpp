#include "RadiusCondition.h"

RadiusCondition::RadiusCondition(bool within_radius)
{
	setIsWithinRadius(within_radius);
	name = "Radius Condition";
}

RadiusCondition::~RadiusCondition()
= default;

void RadiusCondition::setIsWithinRadius(bool state)
{
	m_isWithinRadius = state;
	data = state;
}

bool RadiusCondition::Condition()
{
	return m_isWithinRadius;
}