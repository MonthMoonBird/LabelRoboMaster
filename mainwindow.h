#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>
#include <QString>
#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>
#include "drawonpic.h"
#include "labeldialog.h"
#include "configuredialog.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, std::string path="", int init_mode=0);

    ~MainWindow();

private slots:

    void on_openDirectoryPushButton_clicked();

    void on_fileListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_label_labelChanged(const QVector<box_t> &);

    void on_labelListWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_labelListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_interpolateButton_clicked();

    void on_smartPushButton_clicked();

    void on_nextPushButton_clicked();

    void on_prevPushButton_clicked();

    void on_upLabelButton_clicked();

    void on_downLabelButton_clicked();

    void on_delImageButton_clicked();

    void on_fileListHorizontalSlider_valueChanged(int value);

    void on_fileListHorizontalSlider_rangeChanged(int min, int max);

    void on_modeComboBox_currentIndexChanged(int i);
    
    void on_autoEnhanceVCheckBox_stateChanged(int check);

private:
    Ui::MainWindow *ui = nullptr;

    LabelDialog *dialog = nullptr;

    Configuredialog *cdialog = nullptr;
};

#endif // MAINWINDOW_H
