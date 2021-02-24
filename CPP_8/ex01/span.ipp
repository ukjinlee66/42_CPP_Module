template <typename T>
void Span::addNumber(T start, T end)
{
    this->ms.size() + std::distance(start, end) > this->max_size ? throw(Span::Span_Full()) : this->ms.insert(start,end);
}