/*
 * Steering.cpp
 *
 *  Created on: Oct 14, 2017
 *      Author: mehtaman
 */

#include "IO.hpp"
#include "Steering.hpp"

bool Steering::init()
{
    this->setDirection(directionOfCar::Center);
    this->currentDirection=directionOfCar::Center;
    LE.on(4);
    return true;
}

Steering::directionOfCar Steering::getDirection()
{
    return this->currentDirection;
}

void Steering::setDirection(directionOfCar value)
{
    switch(value)
    {
        case  ExtremeRight:
            this->set(19);
            this->currentDirection= directionOfCar::ExtremeRight;
            break;
        case HardRight:
            this->set(18);
            this->currentDirection= directionOfCar::HardRight;
            break;
        case Right:
            this->set(17);
            this->currentDirection= directionOfCar::Right;
            break;
        case SoftRight:
            this->set(16);
            this->currentDirection= directionOfCar::SoftRight;
            break;
        case Center:
            this->set(15);
            this->currentDirection= directionOfCar::Center;
            break;
        case SoftLeft:
            this->set(14);
            this->currentDirection= directionOfCar::SoftLeft;
            break;
        case Left:
            this->set(13);
            this->currentDirection= directionOfCar::Left;
            break;
        case HardLeft:
            this->set(12);
            this->currentDirection= directionOfCar::HardLeft;
            break;
        case ExtremeLeft:
            this->set(11);
            this->currentDirection= directionOfCar::ExtremeLeft;
            break;
        default:
            this->set(15);
            break;
    }
}