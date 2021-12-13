#include "dialog.h"
#include "ui_dialog.h"
#include <QFormLayout>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QList<QString> list({"One", "Two"});

    QWidget *window = new QWidget;
    QFormLayout *layout = new QFormLayout(window);

    foreach (auto listItem, list) {
        QLabel *label = new QLabel(listItem);
        QLineEdit *edit = new QLineEdit();

        layout->addRow(label, edit);
    }


    window->show();
    this->setParent(window);

}

Dialog::~Dialog()
{
    delete ui;
}
