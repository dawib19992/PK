#ifndef PAMIETNICZEK_H
#define PAMIETNICZEK_H

#include "qdatetime.h"
class Pamietniczek
{
public:
    QDateTime data;
    QString text;
    Pamietniczek(const QDateTime data_, const QString text_);
    bool operator!=(const Pamietniczek& inny) const;

    bool operator==(const Pamietniczek& inny) const;

    bool operator<(const Pamietniczek& inny) const;
};

#endif // PAMIETNICZEK_H
