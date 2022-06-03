#include "QFaceInforWidget.h"
#include "ui_qfaceinforwidget.h"

QFaceInforWidget::QFaceInforWidget(QWidget *parent, AppModel* model) :
    QWidget(parent),
    ui(new Ui::QFaceInforWidget)
{
    ui->setupUi(this);

    m_model = model;
}

QFaceInforWidget::~QFaceInforWidget()
{
    delete ui;
}