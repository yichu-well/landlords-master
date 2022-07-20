#ifndef CARDS_H
#define CARDS_H
#include "card.h"

#include <QSet>

class Cards
{
public:
    enum SortType{Asc, Desc, NoSort};
    Cards();
    explicit Cards(const Card& card);

    void add(const Card& card);
    void add(const Cards& cards);
    void add(const QVector<Cards>& cards);


    Cards& operator <<(const Card& card);
    Cards& operator <<(const Cards& cards);

    void remove(const Card& card);
    void remove(const Cards& cards);
    void remove(const QVector<Cards>& cards);

    int cardCount();
    bool isEmpty();
    bool isEmpty() const;
    void clear();

    Card::CardPoint maxPoint();
    Card::CardPoint minPoint();
    int pointCount(Card::CardPoint point);
    bool contains(const Card& card);
    bool contains(const Cards& cards);

    Card takeRandomCard(); //随机抽取卡片

    CardList toCardList(SortType type = Desc);

    void printAllCardInfo();//打印所有卡片信息

private:
    QSet<Card> m_cards;
};

#endif // CARDS_H
