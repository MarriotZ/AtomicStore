#include "atomicstore.h"
#include "./ui_atomicstore.h"

AtomicStore::AtomicStore(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AtomicStore)
{
    ui->setupUi(this);
}

AtomicStore::~AtomicStore()
{
    delete ui;
}

