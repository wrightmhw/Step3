/**
* \file FishDory.h
*
* \author Michael H. Wright
*
* \brief Class the implements a Dory fish
*/

#pragma once

#include <memory>

#include "Fish.h"


/**
* \brief Implements a Dory fish
*/
class CFishDory : public CFish
{
public:
	CFishDory(CAquarium *aquarium);

	/// \brief Default constructor (disabled)
	CFishDory() = delete;

	/// \brief Copy constructor (disabled)
	CFishDory(const CFishDory &) = delete;

	~CFishDory();

	virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode> &node) override;
private:
	
};