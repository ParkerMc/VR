#include "linuxpath.h"
#include "ui_linuxpath.h"

LinuxPath::LinuxPath(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LinuxPath){
    ui->setupUi(this);
    connect(ui->browse, SIGNAL(pressed()), this, SLOT(browse()));
}

LinuxPath::~LinuxPath(){
    delete ui;
}

void LinuxPath::browse(){
    QString folder = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                       (ui->path->text().length() > 0) ? ui->path->text() : getpwuid(getuid())->pw_dir,
                                                       QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if(folder.length() > 0){
        path = folder;
        ui->path->setText(folder);
    }
}
