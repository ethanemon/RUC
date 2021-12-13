#include "dialog.h"
#include "ui_dialog.h"
#include <QFormLayout>
#include <QList>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    //
}

Dialog::~Dialog()
{
    //
}

void Dialog::setupDialog(QList<QString> names)
{
    QFormLayout *layout = new QFormLayout(this);

    foreach (auto name, names) {
        QLabel *label = new QLabel(name);
        QLineEdit *edit = new QLineEdit();

        layout->addRow(label, edit);
    }

    this->setModal(true);
    this->exec();
}
