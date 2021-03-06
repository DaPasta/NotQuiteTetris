#ifndef TETRIMINO_HPP
#define TETRIMINO_HPP

#include "block.hpp"
#include "shapes.hpp"
#include <SFML/Graphics.hpp>

class Tetrimino {
    private:
        Block *blocks[4][4];
        int rotations;
        int lastDropped;
        int dropDelay;
        int currentRotation;

    public:
        Tetrimino();
        void render(sf::RenderWindow &window);
        void moveLeft(std::vector<Block> &stationaryBlocks);
        void moveRight(std::vector<Block> &stationaryBlocks);
        void update(int time, std::vector<Block> &StationaryBlocks);
        void addBlocks(std::vector<Block> &blocks);
        void startDrop();
        void stopDrop();
        void rotate(std::vector<Block> &blocks);
        bool hitBottom;
};

#endif
