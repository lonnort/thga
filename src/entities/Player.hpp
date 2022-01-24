#pragma once

#include "Entity.hpp"

namespace Pacenstein {
    /**
     * The player is an entity that moves around in the map according to the user's input.
     *
     * A player has movement functions to react to input, 
     * 3 lives and a score.
     */
    class Player : public Entity{
    public:
        Player();

        /**
         * Returns the number of lives of the player.
         *
         * \return An unsigned int of the number of lives.
         */
        unsigned int getLives();

        /**
         * Returns the score of the player.
         *
         * \return An unsigned int of the score.
         */
        unsigned int getScore();


        void moveLeft();
        void moveRight();
        void moveUp();
        void moveDown();

        /**
         * Adds the points of a fruit/pellet/ghost to the score
         * of the player.
         *
         * \param points An unsigned int to add to the score.
         */
        void addToScore(unsigned int points);

        /**
         * Removes one live of the player.
         */
        void removeLive();

        /**
         * Resets the lives of the player back to the 
         * original value of 3.
         * 
         * Used when a new game is started.
         */
        void resetLives();

        /**
         * Resets the score of the player back to the 
         * original value of 0.
         * 
         * Used when a new game is started.
         */
        void resetScore();
        

    private:
    	sf::Vector2f plane;
    	unsigned int lives = 3;
    	unsigned int score = 0;
    };
}
