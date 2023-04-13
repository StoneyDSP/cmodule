#include "value.h"

Val::Val() :
	pi(stoneydsp::MathConstants<Napi::Number>::pi),
	euler(stoneydsp::MathConstants<Napi::Number>::euler)
{

};

Napi::Number Val::getPi()
{
	return pi;
};

Napi::Number Val::getEuler()
{
	return euler;
};