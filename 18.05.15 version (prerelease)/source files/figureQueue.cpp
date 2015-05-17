#include "figureQueue.h"

std::vector<std::shared_ptr<Figure>> FigureQueue::figureVector_;



FigureQueue::FigureQueue()
{

}

FigureQueue::~FigureQueue()
{

}

void FigureQueue::addFigure(std::shared_ptr<Figure> figure)
{
	figureVector_.push_back(figure);
}

std::vector<std::shared_ptr<Figure>>& FigureQueue::getQueue()
{
	return figureVector_;
}

