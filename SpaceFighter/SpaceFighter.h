
#pragma once

#include "KatanaEngine.h"
#include "SpriteBatch.h"

using namespace KatanaEngine;

/** @brief The main game class for the Space Fighter game. */
class SpaceFighter : public Game
{
public:

	/** @brief Initializes a new instance of the SpaceFighter game. */
	SpaceFighter();
	virtual ~SpaceFighter() { }

	/** @brief Gets the name of the game. */
	virtual std::string GetName() const { return "Space Fighter"; }

	/** @brief Called when resources need to be loaded.
		@param pResourceManager The game's resource manager, used for loading
		and managing game resources. */
	virtual void LoadContent(ResourceManager *pResourceManager);

	/** @brief Called when the game determines it is time to draw a frame.
		@param pSpriteBatch The game's sprite batch, used for rendering. */
	virtual void Draw(SpriteBatch *pSpriteBatch);
};