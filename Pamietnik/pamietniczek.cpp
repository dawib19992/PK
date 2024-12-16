#include "pamietniczek.h"

Pamietniczek::Pamietniczek(const QDateTime data_, const QString text_)
{
    data = data_;
    text = text_;
}

bool Pamietniczek::operator!=(const Pamietniczek& inny) const
{
    return *this != inny;
}

bool Pamietniczek::operator==(const Pamietniczek& inny) const
{
    return data.toString("dd-MM-yyyyr. HH:mm") == inny.data.toString("dd-MM-yyyyr. HH:mm");;
}

bool Pamietniczek::operator<(const Pamietniczek& inny) const
{
    return this->data < inny.data;
}
