#include "qcloudtreeview.h"
#include "ui_qcloudtreeview.h"
#include "QScrollBar"

QCloudTreeView::QCloudTreeView(QWidget *parent) :
    QCTreeView(parent),
    ui(new Ui::QCloudTreeView)
{
    ui->setupUi(this);
    setHeaderHidden(true);
    setEditTriggers(NoEditTriggers);

}

QCloudTreeView::~QCloudTreeView()
{
    delete ui;
}
