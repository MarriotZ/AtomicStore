#ifndef ATOMICSTORE_H
#define ATOMICSTORE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class AtomicStore; }
QT_END_NAMESPACE

class AtomicStore : public QMainWindow
{
    Q_OBJECT

public:
    AtomicStore(QWidget *parent = nullptr);
    ~AtomicStore();

private:
    Ui::AtomicStore *ui;
};
#endif // ATOMICSTORE_H
